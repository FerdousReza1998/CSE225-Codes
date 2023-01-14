#include "complexnumber.h"
#include <iostream>
using namespace std;

Complexnumber::Complexnumber( int real,int imaginarygpart)
{
    this->real=real;
    imaginary = imaginarygpart;
}

void Complexnumber::print()
{

    cout<<"the complex number is: "<<real<<" + "<<imaginary<<"i"<<endl;
}


Complexnumber Complexnumber::operator+(Complexnumber  num)
{
    Complexnumber test(0,0);

    test.real = this->real + num.real;

    test.imaginary = this->imaginary + num.imaginary;

    return test;

}



bool Complexnumber::operator!=(Complexnumber  num)
{
    if(this->real==num.real && this->imaginary ==num.imaginary  )
        {
            return false;

        }

        else
            return true;
}
