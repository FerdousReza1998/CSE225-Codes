#include <iostream>

using namespace std;

int main()
{
    cout << "dynamic memory allocation" << endl;
    //creating a pointer with a integer variable
    //the memory is allocated dynamically
    //new operator is used for allocating memory dynamically
    int *a = new int;
    *a=10;
    cout<<"address of the pointer"<<&a<<endl;
    cout<<"address of a"<<a<<endl;
    cout<<"value stored a: "<<*a<<endl;

    //deallocating memory
    delete a;

    //a pointer which is pointing a float variable
    //we can access the variable with b pointer
    float *b = new float;

    cout<<"dynamic memory allocation for array"<<endl;
    int sizeOfptr=4;
    int *ptr = new int[sizeOfptr];

    for(int counter=0; counter<sizeOfptr;counter++)
    {
        ptr[counter]=counter+2;
    }

    for(int counter=0; counter<sizeOfptr;counter++)
    {
        cout<<ptr[counter]<<endl;
    }






    return 0;
}
