#include <iostream>

using namespace std;

//function without return type and parameters
//we can not print the summation inside this function
void sum(int n1, int n2,int summ) //summation ekta copy holo summ
{
    summ=n1+n2;

}

//function without return type and parameters
//we can not print the summation inside this function
void sumWithreference(int n1, int n2,int& summ) //summation er adrress pass
{
    summ=n1+n2;

}
int main()
{
    cout<<"Taking input from main function:"<<endl;
    int number1, number2;
    cout<<"please enter a whole number"<<endl;
    cin>>number1;
    cout<<"please enter another whole number"<<endl;
    cin>>number2;
    int summation;
    sum(number1,number2,summation); //summation er value pass hosche

    cout<<"the summation is: "<<summation<<endl;

    sumWithreference(number1,number2,summation); //summation er value pass hosche
    cout<<"the summation is: "<<summation<<endl;
    return 0;
}
