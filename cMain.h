#pragma once
#include"wx\wx.h";
#include <wx/protocol/http.h>

class cMain : public wxFrame
{
public:
	cMain();

public:
	wxButton* enterButton = nullptr;
	wxStaticText* selectLocationTxt = nullptr;
	wxComboBox* selectLocationBox = nullptr;
	wxDateTime* currentTime = nullptr;
	wxStaticText* showCurrentTime = nullptr;
	wxHTTP* getAPI = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};
