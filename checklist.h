#ifndef CHECKLIST_H
#define CHECKLIST_H
#include "checklistelement.h"

class CheckList:public CheckListElement
{
public:
    CheckList();
    static void createObjectsList();
    static void showElements();
    static void showEveryThirdElement();
};
#endif // CHECKLIST_H
