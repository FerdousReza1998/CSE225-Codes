#include <iostream>
#include "complexnumber.h"
using namespace std;
int main()
{
//create two objects using constructor
Complexnumber c1(3, 4);
Complexnumber c2(4, 4);


//display two objects c1 and c2
c1.print();
c2.print();

//product of the complex numbers
Complexnumber c3 = c1 * c2;
c3.print();



bool c4 = c1 != c2;
cout<<c4<<endl;



if(c1!=c2)
     cout<<"Two objects are not equal"<<endl;
else
     cout<<"Two objects are equal"<<endl;

return 0;
}
