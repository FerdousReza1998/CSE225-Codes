
#include<iostream>
#include "temp.h"

using namespace std;

   template<class Superman>

   Calculator<Superman>::Calculator(Superman x,Superman y)
    {
          num1=x;
          num2=y;
     }

  template<class Superman>

   void Calculator<Superman>::Sum()
   {
         sum=num1+num2;
   }

   template<class Superman>

   Superman Calculator<Superman>::getSum()
   {
         return sum;
   }

   template<class Superman>

   void Calculator<Superman>::Subtract()
   {
       diff = num1-num2;
/*
        if(diff<0){
            diff*=(-1);

        }
*/
   }

   template<class Superman>

   Superman Calculator<Superman>::getSubtraction()
   {
        return diff;

   }

   template<class Superman>

   void Calculator<Superman>::Product()
   {
       product = num1*num2;
   }

   template<class Superman>

   Superman Calculator<Superman>::getProduct()
   {
        return product ;
   }

   template<class Superman>

   void Calculator<Superman>::Division()
        {

             if(num1>num2)
                {

                     quotient =num1/num2;
                 }

           else
              {
                     quotient = num2/num1;
              }
   }

   template<class Superman>

    Superman Calculator<Superman>::getDivision()
    {
        return quotient;
    }

   template<class Superman>

   void Calculator<Superman>::Remainder()
   {

        if(num1>num2)
           {

             remainder =num1%num2;
           }

        else
             {
                 remainder = num2%num1;
              }

   }

   template<class Superman>

   Superman Calculator<Superman>::getRemainder()
   {
     return remainder;
   }

   template<class Superman>

   void Calculator<Superman>::Percent()
   {

       double temp;

       if(num1>num2)
        {
            temp=(double(num2)/double(num1));
       }
       else
       {
           temp=(double(num1)/double(num2));
       }

       percent =temp*100;

   }

   template<class Superman>

   Superman Calculator<Superman>::getPercent()
   {
       return percent;
   }




