
///Write a recursive function that converts a decimal number to binary number.

#include<iostream>
using namespace std;

int convertBinary(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2) + 10 * convertBinary(decimal_number / 2);
}

// Driver code
int main()
{
    int num, sum;
    cout<<("Enter any number to convert decimal: ");
    cin>>num;
    cout << convertBinary(num);
    return 0;
}
