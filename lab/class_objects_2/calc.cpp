
#include<iostream>
#include "calc.h"

using namespace std;

   calculator::calculator(int x,int y)
    {
          a=x;
          b=y;
     }

   void calculator::add()
   {
         int sum;
         sum=a+b;
         cout<<" \n The Sum of "<<a<<" and "<<b<<" is:"<<sum;
   }

   void calculator::subtract()
   {
        int sub;
        sub=a-b;
         cout<<" \n The Subtraction of "<<a<<" and "<<b<<" is:"<<sub;
   }

   void calculator::multiply()
   {
         int mul;
         mul=a*b;
         cout<<" \n The Product of "<<a<<" and "<<b<<" is:"<<mul;
   }

   void calculator::division()
   {
         float div;
         div=float(a)/float(b);
         cout<<" \n The Division between "<<a<<" and "<<b<<" is:"<<div;
   }

   void calculator::remainder()
   {
         int rem;
         rem=a%b;
         cout<<" \n The Remainder of "<<a<<" and "<<b<<" is:"<<rem;
   }
   void calculator::percentage()
   {

        float per;
        per= (float(a)/float(b))*100;
        cout<<" \n The "<<a<<"% in "<<b<<" is:"<<per;

   }
















