///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "../../include/gui/frame.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_richText2 = new wxRichTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxVSCROLL|wxHSCROLL|wxNO_BORDER|wxWANTS_CHARS );
	bSizer2->Add( m_richText2, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_filePicker2 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Selecione uma Imagem"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	bSizer3->Add( m_filePicker2, 0, wxALL, 5 );

	wxString m_radioBox1Choices[] = { wxT("Radio Button") };
	int m_radioBox1NChoices = sizeof( m_radioBox1Choices ) / sizeof( wxString );
	m_radioBox1 = new wxRadioBox( this, wxID_ANY, wxT("wxRadioBox"), wxDefaultPosition, wxDefaultSize, m_radioBox1NChoices, m_radioBox1Choices, 1, wxRA_SPECIFY_COLS );
	m_radioBox1->SetSelection( 0 );
	bSizer3->Add( m_radioBox1, 0, wxALL, 5 );

	m_toggleBtn1 = new wxToggleButton( this, wxID_ANY, wxT("Processar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_toggleBtn1, 0, wxALL, 5 );

	bSizer2->Add( bSizer3, 1, wxALIGN_CENTER|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	this->SetSizer( bSizer1 );
	this->Layout();
}

MyFrame1::~MyFrame1()
{
}
