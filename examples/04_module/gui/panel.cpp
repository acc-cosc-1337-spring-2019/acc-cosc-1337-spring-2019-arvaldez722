#include "panel.h"
#include <ostream>


/*
Class Constructor

@param wxWindow* the parent window for the Panel class
*/
Panel::Panel(wxWindow* parent)
	: wxPanel(parent, -1)
{
	account = std::make_unique<CheckingAccount>(123, 5000);

	auto vbox = get_box_sizer();
	SetSizer(vbox);
}

void Panel::on_submit_button_click(wxCommandEvent& event)
{
	if (trans_type_radio->GetSelection() == 0)
	{
		account->deposit(std::stod(transaction_text->GetValue().ToStdString()));

	}
	else if (trans_type_radio->GetSelection() == 1)
	{
		account->withdraw(std::stod(transaction_text->GetValue().ToStdString()));
	}
	balance_text->SetLabelText(wxString(std::to_string(account->get_balance())));
}

//main bank account interface

wxBoxSizer* Panel::get_box_sizer()
{
	auto vbox1 = new wxBoxSizer(wxVERTICAL);
	auto balance_label = new wxStaticText(this, wxID_ANY, wxString("Balance: "),
		wxDefaultPosition, wxSize(70, -1));
	vbox1->Add(balance_label, 0);

	balance_text = new wxStaticText(this, wxID_ANY, wxString(std::to_string(account->get_balance())),
		wxDefaultPosition, wxSize(70, -1));
	vbox1->Add(balance_text, 0);

	wxString trans_type_choices[]{ wxT("Deposit"), wxT("Withdraw") };

	trans_type_radio = new wxRadioBox(this, -1, wxT("Transaction Type"),
		wxDefaultPosition, wxDefaultSize, WXSIZEOF(trans_type_choices), trans_type_choices, 1, wxRA_SPECIFY_COLS);
	vbox1->Add(trans_type_radio, 0);

	//a label that read amount

	auto amount_label = new wxStaticText(this, wxID_ANY, wxT("Amount:"),
		wxDefaultPosition, wxSize(70, -1));
	vbox1->Add(transaction_text, 0);

	transaction_text = new wxTextCtrl(this, wxID_ANY);
	vbox1->Add(transaction_text, 0);

	submit_button = new wxButton(this, -1, wxT("Submit"));
	submit_button->Bind(wxEVT_BUTTON, &Panel::on_submit_button_click, this);
	vbox1->Add(submit_button);

	return vbox1;
}