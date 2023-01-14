
///Write a recursive function that find the sum of the following series.

#include <iostream>
#include <cmath>
using namespace std;


/**
   series .... 1+(1/2)+(1/4)+.........+(1/2^n)

**/
double findseries(int n)
{

    if (n == 0)
        return 1.0;
    else
        return (1.0/(pow(2, n))) + findseries(n - 1);


}

// Driver code
int main()
{
    int num;
    cout<<("Enter any number : ");
    cin>>num;
    cout << findseries(num);
    return 0;
}
