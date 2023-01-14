

/*

   Task 2: Using the new operator, allocate a two dimensional integer array.
   The number of rows and columns are going to be provided by the user as input. However,
   in this task, all of the rows are not the same size (the array is uneven).
   The user will specify how many elements the individual rows will have.
   Assign values to the array elements by taking user inputs and then print the values.
    Finally de-allocate the array using the delete operator.
*/


#include <iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;

    int **pt=new int*[r];
    int* p=new int [r];

    for(int i=0;i<r;i++)
        {
        cout<<"Enter number of columns for row "<<i+1<<" : ";
        cin>>p[i];

        pt[i]=new int[p[i]];
    }

    cout<<endl<<"Enter elements for your array:\n";

    for(int i=0;i<r;i++)
        {
        for(int j=0;j<p[i];j++)
        {
            cin>>pt[i][j];
        }
    }
    cout<<endl<<"The array you created is as follows:\n";

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<p[i];j++)
            {
            cout<<pt[i][j]<<" ";
             }
        cout<<endl;
    }

    delete []p;
    delete []pt;

    return 0;

}
