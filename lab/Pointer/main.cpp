#include <iostream>

using namespace std;

void calcCircleInfo(int radius,int *circumference,int *area)

{
    *area = 3.14 * radius * radius;
    *circumference = 2 * 3.14 * radius;
}

int main()
{

    int radius, area, circumference;

    cout<<"Enter radius of Circle"<<endl;
    cin>> radius;

   calcCircleInfo(radius, &circumference, &area);

   cout<<"Area of Circle = "<< area <<endl;
   cout<<"Circumference of Circle = "<<circumference <<endl;

    return 0;
}



