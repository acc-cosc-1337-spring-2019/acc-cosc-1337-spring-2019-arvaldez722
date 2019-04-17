#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include "point.h"

namespace acc {

	class Rectangle : public Shape
	{
	public:
		Rectangle(wxDC* cdc, Point p, int w, int h) : Shape(cdc), point(p),
			width(w), height(h) {}

		void draw() override;
	private:
		Point point;
		int width;
		int height;
	};

}

//because there would be a name conflict with the cmake regtangle

#endif // ! RECTANGLE_H