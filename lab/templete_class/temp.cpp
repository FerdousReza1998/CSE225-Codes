
#include "temp.h"

//constructor
template<class Superman>

DynamicArray<Superman>::DynamicArray(int s)
{
    data = new Superman[s];
    sizee = s;
}

//deconstructor or destructor
template<class Superman>

DynamicArray<Superman>::~DynamicArray()
{
    delete [] data;
}

template<class Superman>
void DynamicArray<Superman>::setValue(int index, Superman value)
{
    data[index] = value;
}

template<class Superman>
Superman DynamicArray<Superman>::getValue(int index)
{
    return data[index];
}

