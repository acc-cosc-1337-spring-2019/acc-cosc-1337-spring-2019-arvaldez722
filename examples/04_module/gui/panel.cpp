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
		//Get a wxString from the "transaction_text" box. Convert that to a regular string using ToStdString().
		// but our deposit function is expecting a double so use stod (string to double) to convert the string to a double
		account->deposit(std::stod(transaction_text->GetValue().ToStdString()));

	}
	else if (trans_type_radio->GetSelection() == 1)
	{
		account->withdraw(std::stod(transaction_text->GetValue().ToStdString()));
	}

	//Update the balance_text box with the new balance
	balance_text->SetLabelText(wxString(std::to_string(account->get_balance())));
}

//main bank account interface

//This is where we actually build the GUI
wxBoxSizer* Panel::get_box_sizer()
{
	//Create the "master box" that everything is displayed in
	auto vbox1 = new wxBoxSizer(wxVERTICAL);

	//Create the text box where we're going to show the bank account balance.
	balance_label = new wxStaticText(this, wxID_ANY, wxString("Balance: "),
		wxDefaultPosition, wxSize(70, -1));
	//and then add the text box to the "master box"
	vbox1->Add(balance_label, 0);

	//Now add the actual balance amount from the account in a different text box
	balance_text = new wxStaticText(this, wxID_ANY, wxString(std::to_string(account->get_balance())),
		wxDefaultPosition, wxSize(70, -1));
	//and then add the text box with the balance in it to the "master box"
	vbox1->Add(balance_text, 0);

	//Create an array with choices for the radio buttons
	wxString trans_type_choices[]{ wxT("Deposit"), wxT("Withdraw") };

	//Now create the actual radio button
	trans_type_radio = new wxRadioBox(this, wxID_ANY, wxT("Transaction Type"),
		wxDefaultPosition, wxDefaultSize, WXSIZEOF(trans_type_choices), trans_type_choices, 1, wxRA_SPECIFY_COLS);
	//and then add the radio button to the "master box"
	vbox1->Add(trans_type_radio, 0);

	//a label for the amount you're depositing or withdrawing: read amount
	auto amount_label = new wxStaticText(this, wxID_ANY, wxT("Amount:"),
		wxDefaultPosition, wxSize(70, -1));
	//Add the label to the "master box"
	vbox1->Add(transaction_text, 0);

	//Create a plain old text box for the user to type a dollar amount into
	transaction_text = new wxTextCtrl(this, wxID_ANY);
	//and then add it to the "Master box"
	vbox1->Add(transaction_text, 0);

	//Create a button that the user will press to submit the deposit or withdrawal
	submit_button = new wxButton(this, wxID_ANY, wxT("Submit"));
	//Register the event. Tell the GUI that when this button is clicked, call the function "on_submit_button_click"
	submit_button->Bind(wxEVT_BUTTON, &Panel::on_submit_button_click, this);
	//and add the submit button to the "master box"
	vbox1->Add(submit_button);

	//return the box that we laid out
	return vbox1;
}