// For compilers that don't support precompilation, include "wx/wx.h"
#include "wx/wxprec.h"
 
#ifndef WX_PRECOMP
#	include "wx/wx.h"
#endif
 
#include "Orbital_Positions.h"
 
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
	return true;
}
