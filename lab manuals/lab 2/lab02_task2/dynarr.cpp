///task 2


#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}

dynArr::~dynArr()
{
    delete[] data;
}

int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}

void dynArr::allocate(int s)
{
    int *temp = new int[s];
    for (int i = 0; i < size && i < s; i++)
    {
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;
    // to show the size diffrence we will add data
    for (int i = size; i < s; i++)
        data[i] = i;
    size = s;
}
