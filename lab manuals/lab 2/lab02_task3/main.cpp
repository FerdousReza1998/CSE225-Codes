
///task3

#include <iostream>
#include "dynArr.h"
using namespace std;


int main()
{
int rows, cols, value,indexr,indexc;

cout << "Enter no of rows :";
cin >> rows;

cout << "Enter no of cols :";
cin >> cols;

dynArr da(rows, cols);
for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {  cout<<"please enter row and column no and value you want to store"<<endl;


            cout<<"[index]row no: ";
            cin>>indexr;

            cout<<"[index]column no: ";
            cin>>indexc;

            cout<<"value: ";
            cin >> value;

            da.setValue(value, indexr, indexc);
        }
    }

cout << "\nDisplaying the 2-D array :" << endl;

for (int i = 0; i < rows; i++)
 {

        for (int j = 0; j < cols; j++)
        {
                cout << da.getValue(i, j)<<" ";
        }
        cout << endl;
}
return 0;
}
