#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "wxcrafter.h"
#include "DataSetUp.h"

class MainFrame : public MainFrameBaseClass
{
public:
    MainFrame(wxWindow* parent);
    virtual ~MainFrame();

    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
protected:
    virtual void buttonClear(wxCommandEvent& event);
    virtual void buttonDivide(wxCommandEvent& event);
    virtual void buttonEight(wxCommandEvent& event);
    virtual void buttonEqual(wxCommandEvent& event);
    virtual void buttonFive(wxCommandEvent& event);
    virtual void buttonForth(wxCommandEvent& event);
    virtual void buttonMulti(wxCommandEvent& event);
    virtual void buttonNine(wxCommandEvent& event);
    virtual void buttonOne(wxCommandEvent& event);
    virtual void buttonPlus(wxCommandEvent& event);
    virtual void buttonSeven(wxCommandEvent& event);
    virtual void buttonSix(wxCommandEvent& event);
    virtual void buttonSub(wxCommandEvent& event);
    virtual void buttonThree(wxCommandEvent& event);
    virtual void buttonTwo(wxCommandEvent& event);
    virtual void buttonZero(wxCommandEvent& event);
private:
    std::string inputNumber1, inputNumber2;
    operationModel operationType = No_Operator;
};
#endif // MAINFRAME_H
