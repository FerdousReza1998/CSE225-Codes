
///task3

#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{

private:
// Declaring variables
int **data;
int rows;
int cols;

public:
dynArr();
dynArr(int rows,int cols);
~dynArr();

void setValue(int value,int row,int col);
int getValue(int row,int col);

};
#endif
