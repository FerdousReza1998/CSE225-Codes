
///Write a recursive function that returns the nth Fibonacci number from the Fibonacci series.
/// 0 1 1 2 3 5
#include <iostream>
using namespace std;
int fib(int n)
{
    if(n == 0)
        return 0;
    else if (n==1)
        return 1 ;


      return fib(n-1) + fib(n-2);
}

int main()
{
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";

   while(i < x)
    {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}
