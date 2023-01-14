
///Write a recursive function that returns the sum of the digits of an integer

#include<iostream>
using namespace std;
134 1+3+4
25 2+5
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
        return 0;

    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{
    int num, sum;

    cout<<("Enter any number to find sum of digits: ");
    cin>>num;

    sum = sumOfDigits(num);

    cout<<"Sum of digits of "<<num<<" = "<<sum;

    return 0;
}
