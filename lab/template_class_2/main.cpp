#include <iostream>
#include "temp.h"
#include "temp.cpp"
using namespace std;


int main()
{
    int sum,dif,prod,div,rem,x,y;
     float per;

     cout<<"Integer calculator"<<endl;

     cout<<"enter value"<<endl;
     cin>>x>>y;

    cout<<endl;

   Calculator<int> obj(x,y);   ///(125,59);


    obj.Sum();
    sum= obj.getSum();

    obj.Subtract();
    dif=obj.getSubtraction();

    obj.Product();
    prod=obj.getProduct();

    obj.Division();
    div=  obj.getDivision();

    obj.Remainder();
    rem=obj.getRemainder();

    obj.Percent();
    per = obj.getPercent();

    cout<<"Sum: "<<sum<<endl<<"Difference: "<<dif<<endl<<"product: "<<prod<<endl<<"division: "<<div<<endl<<"remainder: "<<rem<<endl<<"percent: "<<per<<"%"<<endl;
    cout<<endl<<endl;

    float s,d,p,di,pr,x1,y1;

    cout<<"Float calculator"<<endl;
     cout<<"enter value"<<endl;
     cin>>x1>>y1;
     cout<<endl;
     Calculator<float> obj2(x1,y1);   ///(37.5,3.7)

    obj2.Sum();
    s= obj2.getSum();

    obj2.Subtract();
    d=obj2.getSubtraction();

    obj2.Product();
    p=obj2.getProduct();

    obj2.Division();
    di=  obj2.getDivision();


    obj2.Percent();
    pr = obj2.getPercent();

  cout<<"Sum: "<<s<<endl<<"Difference: "<<d<<endl<<"product: "<<p<<endl<<"division: "<<di<<endl<<"remainder : N\A"<<endl<<"percent: "<<pr<<"%"<<endl;
  cout<<endl<<endl;

  double sm,sub,mul,divi,perc,x2,y2;

     cout<<"Double calculator"<<endl;
     cout<<"enter value"<<endl;
     cin>>x2>>y2;
     cout<<endl;
     Calculator <double>obj3(x2,y2);   ///(150.5,39.9)

     obj3.Sum();
    sm= obj3.getSum();

    obj3.Subtract();
    sub=obj3.getSubtraction();

    obj3.Product();
    mul=obj3.getProduct();

    obj3.Division();
    divi=  obj3.getDivision();


    obj3.Percent();
    perc = obj3.getPercent();

 cout<<"Sum: "<<sm<<endl<<"Difference: "<<sub<<endl<<"product: "<<mul<<endl<<"division: "<<divi<<endl<<"remainder : N\A"<<endl<<"percent: "<<perc<<"%"<<endl;
 cout<<endl<<endl;
}
