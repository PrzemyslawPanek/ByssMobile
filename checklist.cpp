#include "checklist.h"
#include "checklistelement.h"
#include <vector>
#include <iostream>
using namespace std;

//example number of objects
#define infinity 140
//vectors for matrix
vector<CheckListElement>objectsList;
vector<vector<CheckListElement>> mList;
//iterators for matrix
vector<vector<CheckListElement>>::iterator row;
vector<CheckListElement>::iterator col;

CheckList::CheckList()
{

}
//task 4
void CheckList::createObjectsList()
{
    int column=infinity;//column for matrix
    int line=infinity;//line for matrix
    int matrix=column*line;//create matrix value

    //create and fill two-dimensional vector
    for(int i=0;i<=matrix;i++)
    {
    CheckListElement *object= new CheckListElement;
    CheckListElement::description(object);
    objectsList.push_back(*object);
    delete object;
    }

    for(int i=0; i<column; i++)
    {
        mList.push_back(vector<CheckListElement>());
        for(int j=0; j<=line; j++)
        {
             mList[i].push_back(objectsList[j]);
        }
    }
    cout<< mList.size()<<endl;
    cout<< objectsList.size()<<endl;
}
//task 4
void CheckList::showElements()
{
    //iterating through a two-dimensional vector
    for(auto row=mList.begin();row!=mList.end();row++)
    {
        for(auto col=row->begin();col!=row->end();col++)
        {
           cout<<col->textDescription<<endl;
        }
    }
}
//task 5
void CheckList::showEveryThirdElement()
{
    #define thirdElemenStep 3 //for no magic numbers
    vector<CheckList> vctCheckList; //vector for CheckList objects
    vector<pair <CheckListElement,CheckList> > linkedVector; //vector for assign a delegate
    //iterating through a two-dimensional vector
    for(auto row=mList.begin();row!=mList.end();row++)
    {
        for(auto col=row->begin();col!=row->end();col+=thirdElemenStep)
        {
           cout<<col->textDescription<<endl;
           //inicialization some elements checklist to object CheckList using previous object from matrix
           CheckList *exampleCheckListObject = new CheckList;
           exampleCheckListObject->textDescription=col->textDescription;
           vctCheckList.push_back(*exampleCheckListObject);
           //assign a delegate to previous matrix object
           linkedVector.push_back(make_pair(*col,*exampleCheckListObject));
        }
    }
    // task 5
    CheckListElement exampleCheckListElementObject;//some object for show method from task 3;
    exampleCheckListElementObject=objectsList[1];//assign value
    CheckListElement *ptr;//create pointer for acces to method
    ptr=&exampleCheckListElementObject;
    CheckListElement::clickTaskStatus(ptr);//method from task 3
    CheckListElement::description(ptr);// set new textDescription after check status update
    cout<<ptr->textDescription<<"  <----- status po zmianie"<<endl;// show change that work
}
