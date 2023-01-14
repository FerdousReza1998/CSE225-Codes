///task3

#include <iostream>
using namespace std;
#include "dynArr.h"

//Zero argumented constructor
dynArr::dynArr()
{
}

//Parameterized constructor
dynArr::dynArr(int rows, int cols)

{
    this->rows = rows;
    this->cols = cols;

    data = new int*[rows];

    for (int i = 0; i < rows; i++)
         {
             data[i] = new int[cols];
         }
}

// Destructor
dynArr::~dynArr()
{
    delete[] data;
}

void dynArr::setValue(int value, int row, int col)
{
    data[row][col] = value;
}

int dynArr::getValue(int row, int col)
{
    return data[row][col];
}
