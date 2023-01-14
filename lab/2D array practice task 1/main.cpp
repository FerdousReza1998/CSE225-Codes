

/*
   Task 1: Using the new operator, allocate a two dimensional character array.
   Again the number of rows and columns are going to be provided by the user as input.
    All of the rows are the same size. Take character strings as input from the user and then print the strings.
   Finally de-allocate the array using the delete operator.
*/



#include <iostream>

using namespace std;


int main()
{
    int r,c;

    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>c;

   cout<<endl;

    char **pt=new char*[r];

    for(int i=0;i<r;i++)
        {
        pt[i]=new char [c];
    }

    cout << "Enter " << r << " strings of length " << c << ":"<<endl;

    for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        {
            cin>>pt[i][j];
        }
    }
    cout<<endl;

    cout<<"Entered Character strings are:"<<endl;

    cout<<endl;


    for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        {
            cout<<pt[i][j];
        }
        cout<<endl;
    }

    delete []pt;

    return 0;

}






