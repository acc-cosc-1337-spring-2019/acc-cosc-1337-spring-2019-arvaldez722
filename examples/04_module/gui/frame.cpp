#include "frame.h"
#include "panel.h"

Frame::Frame() 
	: wxFrame(NULL, wxID_ANY, "Banking App", wxDefaultPosition, wxSize(400, 300))
{
	auto panel = new Panel(this);
}