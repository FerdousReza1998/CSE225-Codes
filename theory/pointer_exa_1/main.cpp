
#include<bits/stdc++.h>

using namespace std;

void add (int*, int*);

int main()
{
    char ch = 'c';

    double d = 1000.01;


    char *pch = &ch;

    char str[] = "Hello";

    printf("%p\n", pch); // the address of ch
    cout << *pch << endl; // the value of ch

    *pch = 'A';
    printf("%c", *pch);

    int a = 100;
    int b = 200;
    add(&a, &b);
    cout << a + b;

}

void add(int *x, int *y){
    *x = *x + 10; // a = 110
    *y = *y + 20; // b = 220

}
