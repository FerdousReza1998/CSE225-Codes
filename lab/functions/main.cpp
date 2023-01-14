#include <iostream>

using namespace std;

void sum(int &n1, int &n2,int &add)
{
    add=n1+n2;

}


int main()
{
    int number1, number2;

    cout<<"please enter first number"<<endl;
    cin>>number1;

    cout<<"please enter second number"<<endl;
    cin>>number2;

    int summation;

     sum(number1,number2,summation);

    cout<<"the summation is: "<<summation<<endl;
    return 0;
}
