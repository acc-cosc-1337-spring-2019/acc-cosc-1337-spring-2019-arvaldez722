#include "frame.h"
#include "panel.h"

Frame::Frame() 
	: wxFrame(NULL, wxID_ANY, "Even Clearer Hello World App!", wxDefaultPosition, wxSize(800, 600))
{
	auto panel = new Panel(this);
}