#include "cMain.h"
#include "wx/datetime.h"
#include <wx/protocol/http.h>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Check Valid UEN")
{
	enterButton = new wxButton(this, 10001, "Search", wxPoint(10, 40));
	selectLocationTxt = new wxStaticText(this, wxID_ANY, "Select Location: ",wxPoint(10,10));
	selectLocationBox = new wxComboBox(this, wxID_ANY, "Please Choose a Location: ", wxPoint(100, 10), wxSize(175,50));
	selectLocationBox->Append("Admiralty");	
	
	showCurrentTime = new wxStaticText(this, -1, wxT(""), wxPoint(10, 100), wxDefaultSize, 0, wxT(""));
		
	wxString temp4 = ("The current date and time is: ");
	SYSTEMTIME mswTime;
	GetSystemTime(&mswTime);
	temp4 += wxString::Format(" Year:%d ", mswTime.wYear);
	temp4 += wxString::Format(" Month:%d ", mswTime.wMonth);
	temp4 += wxString::Format(" Day:%d ", mswTime.wDay);
	temp4 += wxString::Format(" Time:%d ", mswTime.wHour);
	temp4 += wxString::Format(":%d ", mswTime.wMinute);
	temp4 += wxString::Format(":%d ", mswTime.wSecond);
	showCurrentTime->SetLabel(temp4);

	

}
void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	selectLocationBox->GetValue();

}
