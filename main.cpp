#include <iostream>
#include <vector>
#include "checklistelement.h"
#include "checklist.h"
using namespace std;

int main()
{
    //create example object
    CheckListElement *exampleObject=new CheckListElement;
    //run app methods included in tasks
    CheckListElement::description(exampleObject);
    CheckList::createObjectsList();
    CheckList::showEveryThirdElement();
    delete exampleObject;//clear memory
    return 0;
}
//****************************//
/*
Wiele moich implementacji traci sens logiczny i mogą nie mieć
odzwierciedlenia w realnej aplikacji, jednak chciałem
jak najbardziej przyrównać je do opisu zadań. Mam nadzieję,
że dobrze zinterpretowałem polecenia, a kod jest zrozumiały
i przejrzysty.

Przemysław Panek
*/
//***************************//
