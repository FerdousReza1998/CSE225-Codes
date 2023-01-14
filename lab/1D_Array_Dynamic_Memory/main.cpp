#include <iostream>

using namespace std;

int main()
{
    int n;
    cout <<"Enter the size of the array:" << endl;
    cin>>n;

    int *ptr = new int[n];

    cout<<"Input numbers:"<<endl;

   for(int i=0 ; i<n ; i++)
    {
        cin>>ptr[i];
    }

   cout<<"Your inputted  numbers are:"<<endl;

   for(int i=0 ; i<n ; i++)
    {
      cout<<ptr[i]<<endl;
    }

   delete []ptr;

    return 0;
}
