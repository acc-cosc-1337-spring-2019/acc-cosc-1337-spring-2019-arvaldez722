#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>
#include "checking_account.h"

class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);

private:
	wxBoxSizer* get_box_sizer();
	void on_hello(wxCommandEvent& event); //signature for class function
	
	wxButton* hello_button;
	wxStaticText* my_message;
};
#endif // !PANEL_H
