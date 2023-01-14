
///Write a recursive function that find the minimum element in an array of integers

#include <iostream>
using namespace std;

// function to print Minimum element using recursion
int findMin(int A[], int n)
{
        // if size = 0 means whole array has been traversed
        if (n == 1)
            return A[0];

        return min(A[n-1], findMin(A, n-1));
}




// driver code to test above function
int main()
{
        int A[] = {41, 45, 6, 10, 2, 6, 9};
        int n = sizeof(A)/sizeof(A[0]);

        cout << findMin(A, n);
        return 0;
}
