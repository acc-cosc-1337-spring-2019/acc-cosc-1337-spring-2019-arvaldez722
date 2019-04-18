#include "clock_graphic.h"

ClockGraphic::ClockGraphic(wxDC* dc, Point s, Point e) 
	: device_context(dc), start(s), end(e)
{
	clock_rim = std::make_unique<Circle>(dc, s, e);

	wxRect w(start.x, start.y, end.x, end.y);
	width = w.GetWidth();

}

void ClockGraphic::draw() 
{
	device_context->SetPen(wxPen(wxColor(0, 0, 0), 1));
	clock_rim->draw();
	draw_seconds_markers();
	draw_hours_text();
	draw_hours_hand();
	draw_minutes_hand();
	draw_seconds_hand();
	clock.update_time();
}

/*
Draw a clock hand on this Clock at angle degrees length pixels long
*/
void ClockGraphic::draw_hand(double degrees, int length)
{
	double radians = get_angle(degrees);

	int x1 = width / 2;
	int y1 = height / 2;

	int x2 = cos(radians) * length + width / 2;
	int y2 = sin(radians) * length + width / 2;

	unique_ptr<Shape> line = make_unique<Line>(device_context, Point(x1, y1), Point(x2, y2));

	line->draw();
}

void ClockGraphic::draw_hours_hand()
{
	double hours_angle = clock.get_hours() / 12 * 360;
	device_context->SetPen(wxPen(wxColor(334, 343, 88), 3));

	draw_hand(hours_angle, 45);
}

void ClockGraphic::draw_minutes_hand()
{
	double minutes_angle = clock.get_minutes() / 60 * 360;
	device_context->SetPen(wxPen(wxColor(0, 43, 88), 2));

	draw_hand(minutes_angle, 90);
}

void ClockGraphic::draw_seconds_hand()
{
	double seconds_angle = clock.get_seconds() / 60 * 360;
	device_context->SetPen(wxPen(wxColor(73, 0, 88), 1));

	draw_hand(seconds_angle, 105);
}

void ClockGraphic::draw_hours_text()
{

}

void ClockGraphic::draw_seconds_markers()
{

}

double ClockGraphic::get_angle(double degrees)
{
	return ((degrees - 90) * pi) / 180;
}

