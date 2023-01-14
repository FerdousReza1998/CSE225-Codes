#include <iostream>
#include "complexnumber.h"

using namespace std;

int main()
{
    cout << "operator overloading" << endl;
    int r ,i;

     cout << "please enter a real and imaginary part of complex number" << endl;
     cin>>r;
     cin>>i;

     Complexnumber ci(r,i);
     ci.print();

      cout << "please enter a real and imaginary part of complex number" << endl;
      cin>>r;
      cin>>i;

     Complexnumber ci2(r,i);
     ci2.print();

     Complexnumber ci3(0,0);
    // ci3.print();

     ci3 = ci + ci2;

     ci3.print();

     Complexnumber c4(r,i);

     bool check;

    // check c2!=c1;
     if(check)
     {

     }

    return 0;
}
