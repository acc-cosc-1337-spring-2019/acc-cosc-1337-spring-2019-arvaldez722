#include "panel.h"
#include <ostream>

class MyHello
{
public:
	std::string say_hello() { return "April"; }

};

/*
Class Constructor
@param wxWindow* the parent window for the Panel class
*/
Panel::Panel(wxWindow* parent)
	: wxPanel(parent, wxID_ANY)
{
	auto vbox = get_box_sizer();
	SetSizer(vbox);
}

void Panel::on_hello(wxCommandEvent& event) {
	//MyHello h;
	my_message->SetLabelText(wxT("Oh Hello! I didn't see you there!"));
	//wxLogMessage("Hewwo is anybody thewre? OwO from wxWidgets " + wxString(h.say_hello()));
}

//This is where we actually build the GUI
wxBoxSizer* Panel::get_box_sizer()
{
	//Create the "master box" that everything is displayed in
	auto vbox1 = new wxBoxSizer(wxVERTICAL);

	//Create a button
	hello_button = new wxButton(this, wxID_ANY, wxT("Hewwo"));

	//Add it to the Panel/GUI
	hello_button->Bind(wxEVT_BUTTON, &Panel::on_hello, this);
	vbox1->Add(hello_button);

	//Add the text box
	my_message = new wxStaticText(this, wxID_ANY, wxString( wxT("Go Away!")),
//		wxPoint(450, 450), wxSize(70, -1));
		wxDefaultPosition, wxSize(70, -1));
	vbox1->Add(my_message, 0);

	return vbox1;
}