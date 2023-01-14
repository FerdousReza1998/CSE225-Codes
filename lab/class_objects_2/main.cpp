#include <iostream>
#include "calc.h"
using namespace std;

int main()
{
     int x,y;
   // Taking input.
    cout<<" Enter x and y values:";
    cin>>x>>y;
   // Creating class object.
    calculator obj(x,y);

// Calling the calculator class functions using object obj.
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.division();
    obj.remainder();
    obj.percentage();
    return 0;
}
