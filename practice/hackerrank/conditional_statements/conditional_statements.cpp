
#include <iostream>

using namespace std;


int main() {

     int n;

     cin>>n;

     if(n>9)
        {
            cout << "Greater than 9";
        }
    else
        {
               if (n>8)
                   {
                   cout << "nine";
                   }
             else{
                 if(n>7)
                    {
                     cout<<"eight";
                 }
                 else{
                     if(n>6)
                     {
                         cout<<"seven";
                     }
                     else {
                         if(n>5)
                         {
                             cout<<"six";
                         }
                         else{
                             if(n>4)
                             {
                                 cout<<"five";
                             }
                             else{
                                 if(n>3)
                                 {
                                     cout<<"four";
                                 }
                                 else {
                                     if(n>2)
                                     {
                                         cout<<"three";
                                     }
                                     else{
                                         if(n>1)
                                         {
                                             cout<<"two";
                                         }
                                         else{
                                             if(n>0)
                                             {
                                                 cout<<"one";
                                             }
                                             else
                                             {
                                                 cout<<"invalid entry";
                                             }
                                         }
                                     }
                                 }
                             }
                         }
                     }
                 }
             }

        }

    return 0;
}
