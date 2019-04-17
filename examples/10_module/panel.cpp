#include "panel.h"

Panel::Panel(wxWindow* parent) : wxPanel(parent, -1) 
{
	auto vbox = new wxBoxSizer(wxVERTICAL);
	wxString choices[] {wxT("Text"), wxT("Circle"), wxT("Rectangle")};
	

	auto hbox0 = new wxBoxSizer(wxHORIZONTAL);
	radio_box = new wxRadioBox(this, -1, wxT("Choices"), wxDefaultPosition, wxDefaultSize,
		                            WXSIZEOF(choices), choices, 1, wxRA_SPECIFY_COLS);

	hbox0->Add(radio_box);

	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);
	auto m_usernameLabel = new wxStaticText(this, wxID_ANY, wxT("Name: "),
		wxDefaultPosition, wxSize(70, -1));
	hbox1->Add(m_usernameLabel, 0);

	draw_text = new wxTextCtrl(this, wxID_ANY);
	hbox1->Add(draw_text, 0);

	//create a button
	auto draw_button = new wxButton(this, -1, wxT("Draw"));
	draw_button->Bind(wxEVT_BUTTON, &Panel::OnDraw, this);

	hbox1->Add(draw_button);

	vbox->Add(hbox0, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	SetSizer(vbox);

	this->Bind(wxEVT_LEFT_DOWN, &Panel::OnMouseDown, this);
	this->Bind(wxEVT_LEFT_UP, &Panel::OnMouseUp, this);
}

void Panel::OnDraw(wxCommandEvent & event)
{
	std::unique_ptr<Shape> shape;
	auto cdc = new wxClientDC(this);
	cdc->Clear();//clears any previous shapes 
	
	draw_shape(Point(200, 200));

	shape->draw();
}

void Panel::OnMouseDown(wxMouseEvent & event)//the initial mouse click/drag
{
	auto cdc = new wxClientDC(this);
	wxPoint position = event.GetPosition();

	int x = cdc->DeviceToLogicalX(position.x);
	int y = cdc->DeviceToLogicalX(position.y);

	coord.x = x;
	coord.y = y;

}

void Panel::OnMouseUp(wxMouseEvent & event)
{
	draw_shape(coord);
}

void Panel::draw_shape(Point p, int width, int height, int radius)
{
	
	std::unique_ptr<Shape> shape;
	auto cdc = new wxClientDC(this);
	cdc->Clear();//clears any previous shapes 

	if (radio_box->GetSelection() == 0)//draw text
	{
		shape = std::make_unique<Text>(cdc, draw_text->GetValue().ToStdString(), p);

	}
	else if (radio_box->GetSelection() == 1)//draw cirlce
	{
		shape = std::make_unique<Circle>(cdc, p, radius);
	}
	else if (radio_box->GetSelection() == 2)//draw rectangle
	{
		shape = std::make_unique<acc::Rectangle>(cdc, p, width, height);
	}

	shape->draw();
}

