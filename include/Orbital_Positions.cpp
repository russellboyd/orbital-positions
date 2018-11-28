// For compilers that don't support precompilation, include "wx/wx.h"
#include "wx/wxprec.h"
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include <string>
#include "Orbital_Positions.h"
using namespace std;

IMPLEMENT_APP(Orbital_Positions)
 
// This is executed upon startup, like 'main()' in non-wxWidgets programs.
bool Orbital_Positions::OnInit()
{
	wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Hello wxWidgets World"));
  //  frame->
	frame->CreateStatusBar();
	frame->SetStatusText(_T("Hello World"));
	frame->Show(true);
	SetTopWindow(frame);
	wxMenu* menus[3];
	wxString titles[] = new wxString[3];
	wxMenuBar *mbar = new wxMenuBar(1, menus, titles[], 0);
	mbar->Insert(0,menus,"Test1");
		
	return true;

