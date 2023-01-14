#include <iostream>

using namespace std;

int main()
{
    /*
    //pointer
    int *a;
    int num=10;
    a=&num;
    int *b= &num;

    cout<<a<<endl;
    cout<<b<<endl;
    */
    int va=20;
    int *ptp = &va;      /// ptp = &va;
    int **pt = &ptp;

    cout<<va<<endl; //value of va
    cout<<ptp<<endl;  //address of va
    cout<<&va<<endl;  //address of va
    cout<<*ptp<<endl; //value of va
    cout<<pt<<endl; //address of ptp, that is,stored in pt
    cout<<*pt<<endl; //address va, that is stored in ptp
    cout<<**pt<<endl; //value of va


    return 0;
}
