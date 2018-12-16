#include "MainFrame.h"
#include "BigNumberCaculator.h"
#include <wx/aboutdlg.h>
#include <string>

MainFrame::MainFrame(wxWindow* parent)
    : MainFrameBaseClass(parent)
{
   
}

MainFrame::~MainFrame()
{
}

void MainFrame::OnExit(wxCommandEvent& event)
{
    wxUnusedVar(event);
    Close();
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxUnusedVar(event);
    wxAboutDialogInfo info;
    info.SetCopyright(_("Big Number Calculator"));
    info.SetLicence(_("GPL v2 or later"));
    info.SetDescription(_("For Positive Numbers right now!"));
    ::wxAboutBox(info);
}

void MainFrame::buttonDivide(wxCommandEvent& event)
{
    if (inputNumber1.size() > 0) {
        operationType = Divide_Operator;
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str);
        inputNumber2.clear();
    }
}

void MainFrame::buttonEight(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('8');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('8');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonEqual(wxCommandEvent& event)
{
    std::vector<int> result;
    std::string result_to_string;
    BigNumberCaculatorProject::BigNumberCaculator run;
    if (inputNumber1.size() > 0 && inputNumber2.size() > 0) {
        switch (operationType) {
            case Plus_Operator:
                result = run.addition(inputNumber1, inputNumber2);
                break;
            case Sub_Operator:
                result = run.subtraction(inputNumber1, inputNumber2);
                break;
            case Multiple_Operator:
                result = run.multiplication(inputNumber1, inputNumber2);
                break;
            case Divide_Operator:
                result = run.division(inputNumber1, inputNumber2);
                break;
            case No_Operator:
                return;
        }
    
    for (auto ele = (result.end() - 1); ele >= result.begin(); ele-- )
        result_to_string = result_to_string + std::to_string(*ele);
        
    m_textCtrl83->SetLabel(result_to_string);
    
    inputNumber1.clear();
    inputNumber2.clear();
    operationType = No_Operator;
    }
}

void MainFrame::buttonFive(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('5');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('5');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonForth(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('4');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('4');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonMulti(wxCommandEvent& event)
{
    if (inputNumber1.size() > 0) {
        operationType = Multiple_Operator;
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str);
        inputNumber2.clear();
    }
}

void MainFrame::buttonNine(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('9');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('9');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonOne(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('1');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('1');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonPlus(wxCommandEvent& event)
{
    if (inputNumber1.size() > 0) {
        operationType = Plus_Operator;
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str);
        inputNumber2.clear();
    }
}

void MainFrame::buttonSeven(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('7');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('7');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonSix(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('6');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('6');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonSub(wxCommandEvent& event)
{
    if (inputNumber1.size() > 0) {
        operationType = Sub_Operator;
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str);
        inputNumber2.clear();
    }
}

void MainFrame::buttonThree(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('3');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('3');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonTwo(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        inputNumber1.push_back('2');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        inputNumber2.push_back('2');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonZero(wxCommandEvent& event)
{
    if (operationType == No_Operator) {
        if (inputNumber1.size() > 0)
            inputNumber1.push_back('0');
        m_textCtrl21->SetLabel(inputNumber1);
    }
    else {
        if (inputNumber2.size() > 0)
            inputNumber2.push_back('0');
        std::string str;
        str.push_back(operationType);
        m_textCtrl21->SetLabel(inputNumber1 + str + inputNumber2);
    }
}

void MainFrame::buttonClear(wxCommandEvent& event)
{
    inputNumber1.clear();
    inputNumber2.clear();
    operationType = No_Operator;
    m_textCtrl21->SetLabel(inputNumber1);
}
