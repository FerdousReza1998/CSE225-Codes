
#include <iostream>

using namespace std;

/// when you want to print the output in the function


/*

void update(int *n1, int *n2)
{
   int add=*n1+*n2;
   int ab= abs(*n1-*n2);

   cout<<add<<endl<<ab;

}


int main()
{
    int number1, number2;

    cin>>number1;

    cin>>number2;

     update(&number1,&number2);

    return 0;
}

*/

/// when you don't want to print the output in the function

void update(int *n1, int *n2,int *add, int *ab)
{
    *add=*n1+*n2;
    *ab = abs(*n1-*n2);

}


int main()
{
    int number1, number2, add,ab;

    cin>>number1;

    cin>>number2;

     update(&number1,&number2,&add,&ab);

     cout<<add<<endl<<ab;
    return 0;
}
