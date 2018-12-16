//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _TEST_BIGNUMBERCALGUI_WXCRAFTER_BASE_CLASSES_H
#define _TEST_BIGNUMBERCALGUI_WXCRAFTER_BASE_CLASSES_H

#include <wx/artprov.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/menu.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/xrc/xmlres.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

class MainFrameBaseClass : public wxFrame
{
protected:
    wxStaticText* m_staticText19;
    wxTextCtrl* m_textCtrl21;
    wxTextCtrl* m_textCtrl83;
    wxButton* m_button25;
    wxButton* m_button27;
    wxButton* m_button29;
    wxButton* m_button53;
    wxButton* m_button39;
    wxButton* m_button41;
    wxButton* m_button43;
    wxButton* m_button55;
    wxButton* m_button47;
    wxButton* m_button49;
    wxButton* m_button51;
    wxButton* m_button57;
    wxButton* m_button61;
    wxButton* m_button63;
    wxButton* m_button65;
    wxButton* m_button73;
    wxMenuBar* m_menuBar;
    wxMenu* m_name6;
    wxMenuItem* m_menuItem7;
    wxMenu* m_name8;
    wxMenuItem* m_menuItem9;

protected:
    virtual void buttonSeven(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonForth(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonOne(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonZero(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonEight(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonFive(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonTwo(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonPlus(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonNine(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonSix(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonThree(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonSub(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonMulti(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonDivide(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonEqual(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void buttonClear(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void OnExit(wxCommandEvent& event)
    {
        event.Skip();
    }
    virtual void OnAbout(wxCommandEvent& event)
    {
        event.Skip();
    }

public:
    wxStaticText* GetStaticText19()
    {
        return m_staticText19;
    }
    wxTextCtrl* GetTextCtrl21()
    {
        return m_textCtrl21;
    }
    wxTextCtrl* GetTextCtrl83()
    {
        return m_textCtrl83;
    }
    wxButton* GetButton25()
    {
        return m_button25;
    }
    wxButton* GetButton27()
    {
        return m_button27;
    }
    wxButton* GetButton29()
    {
        return m_button29;
    }
    wxButton* GetButton53()
    {
        return m_button53;
    }
    wxButton* GetButton39()
    {
        return m_button39;
    }
    wxButton* GetButton41()
    {
        return m_button41;
    }
    wxButton* GetButton43()
    {
        return m_button43;
    }
    wxButton* GetButton55()
    {
        return m_button55;
    }
    wxButton* GetButton47()
    {
        return m_button47;
    }
    wxButton* GetButton49()
    {
        return m_button49;
    }
    wxButton* GetButton51()
    {
        return m_button51;
    }
    wxButton* GetButton57()
    {
        return m_button57;
    }
    wxButton* GetButton61()
    {
        return m_button61;
    }
    wxButton* GetButton63()
    {
        return m_button63;
    }
    wxButton* GetButton65()
    {
        return m_button65;
    }
    wxButton* GetButton73()
    {
        return m_button73;
    }
    wxMenuBar* GetMenuBar()
    {
        return m_menuBar;
    }
    MainFrameBaseClass(wxWindow* parent,
        wxWindowID id = wxID_ANY,
        const wxString& title = _("Big Number Calculator"),
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxSize(500, 330),
        long style = wxCAPTION | wxRESIZE_BORDER | wxMAXIMIZE_BOX | wxMINIMIZE_BOX | wxSYSTEM_MENU | wxCLOSE_BOX);
    virtual ~MainFrameBaseClass();
};

#endif
