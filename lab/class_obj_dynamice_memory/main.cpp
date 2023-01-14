#include <iostream>
#include "dynArr.h"

using namespace std;

int main()
{
    cout << "Dynamic memory with class" << endl;
    cout<<"please enter the size of the array"<<endl;

    int length, index, value;
    cin>>length;

    DynamicArray array1(length);

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
    return 0;
}
