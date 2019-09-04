#ifndef CHECKLISTELEMENT_H
#define CHECKLISTELEMENT_H
#include <string>
using namespace std;

class CheckListElement
{   
public:  
    struct data
    {
        string monday="monday";
        string tuesday="tuesday";
        string wednesday="wednesday";
        string thursday="thursday";
        string friday="friday";
        string saturday="saturday";
        string sunday="sunday";
    }daysOfWeek;
    bool workStatus;
    string textDescription;
    CheckListElement();
    static void description(CheckListElement *exampleObject);
    static void clickTaskStatus(CheckListElement *exampleObject);
};
#endif // CHECKLISTELEMENT_H
