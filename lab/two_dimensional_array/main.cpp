#include <iostream>

using namespace std;

int main()
{

    int row,col;
   cout << "Enter row number "<< endl;
   cin>>row;
    cout << "Enter column number "<< endl;
   cin>>col;


   int **pt = new int*[row];

   for (int counter =0; counter<row;counter++)

   {
       pt[counter]=new int [col];

   }

   for(int iter =0;iter <row;iter++)

   {
       for(int itercol =0;itercol <col;itercol++)
       {
           pt[iter][itercol]=7;
       }

   }

   for(int iter =0;iter <row;iter++)

   {
       for(int itercol =0;itercol <col;itercol++)
       {
          cout<< pt[iter][itercol]<<" ";
       }
       cout<<endl;

   }

    return 0;
}
