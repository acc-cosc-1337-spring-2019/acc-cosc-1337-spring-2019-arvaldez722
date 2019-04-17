#ifndef TEXT_H
#define TEXT_H
#include<wx/wx.h>
#include "shape.h"
#include "point.h"

#include <string>

class Text :public Shape
{
public:
	Text(wxDC* dc, std::string t ,Point p) : Shape(dc), text(t), point(p) {}
	void draw() override; //override defines the base class fucntion

private:
	Point point;
	std::string text;
};



#endif // TEXT_H