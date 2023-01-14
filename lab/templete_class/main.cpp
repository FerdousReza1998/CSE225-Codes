#include <iostream>
#include "temp.h"
#include "temp.cpp"
using namespace std;

int main()
{

    cout<<"please enter the size of the array"<<endl;
    int length, index, value;

    cin>>length;


    //object declaration
    DynamicArray<int>array1(length);
	
    for(int counter=0; counter<length; counter++)
    {
        cout<<"please enter index and value you want to store"<<endl;
        cin>>index;
        cin>>value;
        array1.setValue(index, value);
    }
    for(int iter=0; iter<length; iter++)
    {
        cout<<"the value of index "<<iter<<" is "<<array1.getValue(iter)<<endl;
    }
// for character array
    DynamicArray <char> arrChar(length);
	
    char val;
    for(int counter=0; counter<length; counter++)
    {
        cout<<"please enter index and value you want to store"<<endl;
        cin>>index;
        cin>>val;
        arrChar.setValue(index, val);
    }

    for(int iter=0; iter<length; iter++)
    {
        cout<<"the value of index "<<iter<<" is "<<arrChar.getValue(iter)<<endl;
    }



    return 0;
}
