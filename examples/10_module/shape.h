#ifndef  SHAPE_H
#define SHAPE_H
#include<wx/wx.h>


//this is the base class 

class Shape
{
public:
		//
	Shape(wxDC* dc) : device_context(dc) {}
	virtual void draw() = 0; //pure virtual- tells us that the other classes will provide their own functionality
	//since it's pure virtual we cant make an instance of it (it does it behind the scenes)

protected:

	wxDC* device_context;
};

#endif // SHAPE_H