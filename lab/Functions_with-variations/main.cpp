#include <iostream>

using namespace std;
//function that takes two numbers as input and
//prints the summation of those numbers
//return_type function_name (parameter,..){statements}
//function with return type and without parameter
int summmation ()
{
    cout<<"this is the function which do no take parameter"<<endl;
    int num1, num2, sum=0;
    cout<<"please enter a integer: "<<endl;
    cin>>num1;
    cout<<"please enter another integer: "<<endl;
    cin>>num2;
    sum=num1+num2;
    return sum;
}
//function with return type and parameters
int sum(int n1, int n2)
{
    int sum=n1+n2;
    return sum;
}
//function without return type and with parameters
void addition(int a, int b)
{
    cout<<"function without return type and with parameters"<<endl;
    int summ=a +b;
    cout<<"the summation is: "<<summ<<endl;
}

int main()
{
    //cout << "Hello world!" << endl;
    //calling the function
    int addresult = summmation();
    cout<<"the addresult is :" <<addresult<<endl;

    cout<<"Taking input from main function:"<<endl;
    int number1, number2;
    cout<<"please enter a whole number"<<endl;
    cin>>number1;
    cout<<"please enter another whole number"<<endl;
    cin>>number2;

    //calling function with parameter
    addresult = sum(number1, number2);
    cout<<"the addresult is :" <<addresult<<endl;

    //calling a function without return type
    addition(number1, number2);

    return 0;
}
