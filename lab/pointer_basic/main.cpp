#include <iostream>

using namespace std;

int main()
{
    //declaring a pointer
    int *pt;
    int var=10;
    cout<<"the value of var: "<<var<<endl;
    //cout<<*pt<<endl;
    cout<<"adress of var/value stored in pt"<<pt<<endl;
    pt = &var;
    var = 50;
    cout<<"the value of var: "<<var<<endl;
    cout<<"adress of var/value stored in pt"<<pt<<endl;
    int test=70;

    *pt = var;// this line actually reassigning the value 50 in var
    cout<<"the value of var: "<<var<<endl;
    cout<<"the value of var: "<<*pt<<endl;
    cout<<"adress of var/value stored in pt"<<pt<<endl;

    *pt = test;
    cout<<"the value of var: "<<var<<endl;
    cout<<"the value of var: "<<*pt<<endl;
    cout<<"the value of test: "<<test<<endl;
    cout<<"adress of var/value stored in pt"<<pt<<endl;
    cout<<"adress of var/value stored in pt"<<&var<<endl;

    return 0;
}
