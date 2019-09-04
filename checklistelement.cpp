#include "checklistelement.h"
#include "checklist.h"
#include <string>
using namespace std;

CheckListElement::CheckListElement()
{

}

//task 1
void CheckListElement::description(CheckListElement *exampleObject)
{
    string textStatus, textAssigment="Przykladowe zadanie->", dayOfWeek="Data ze struktury: ";

        if (exampleObject->workStatus)
        {
            textStatus="Gotowe";
        }
        else
        {
            textStatus="Do wykonania";
        }

     exampleObject->textDescription = dayOfWeek + textAssigment + textStatus;
}

//task 3 and 4
void CheckListElement::clickTaskStatus(CheckListElement *exampleObject)//Object as an argument because in task description i have to assign showCheckListElement inside body
{
    //change status gotowe/do zrobienia
    if (exampleObject->workStatus)
    {
        exampleObject->workStatus=false;
    }
    else
    {
        exampleObject->workStatus=true;
    }
    //show elements from CheckList (task 4 description)
    CheckList::showElements();
}
