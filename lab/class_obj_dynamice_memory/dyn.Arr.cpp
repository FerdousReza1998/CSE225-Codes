#include "dynArr.h"

//costructor
DynamicArray::DynamicArray(int s)
{
    data = new int[s];
    sizee = s;
}

//deconstructor or destructor
DynamicArray::~DynamicArray()
{
    delete [] data;
}

void DynamicArray::setValue(int index, int value)
{
    data[index] = value;
}

int DynamicArray::getValue(int index)
{
    return data[index];
}
