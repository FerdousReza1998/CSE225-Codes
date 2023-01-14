
///write a c/c++ program that can demonstrate the difference between p == q and *p == *q


#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
     int x = 5;
     int y = 10;

     int *p;
     int *q;

     p = &x;
     q = &y;

/// same thing  below but  more efficient

/*
    int x = 5;
    int y = 10;

    int *p = &x;         /// p=&x ,, *p =  value of x
    int *q = &y;
*/

    cout << "When values of original variables are different: " << endl;

    cout << (p==q) << endl;

    cout << (*p == *q) << endl;

    cout << endl;

    *p=*q;


    cout << "When values of original variables are made same by deferencing: *p = *q " << endl;

    cout << (p==q) << endl;

    cout << (*p == *q) << endl;

    cout << endl;

    p=q;

    cout << "When both pointers point to the same variable: p = q " << endl;

    cout << (p==q) << endl;

    cout  << endl;



     return 0 ;
}




