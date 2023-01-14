#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class DynamicArray
{

private:
    int *data;
    int sizee;

public:
    DynamicArray(int); //constructor
    ~DynamicArray(); //deconstructor

    //stores values in the array
    //takes two parameter,
    //1st parameter is the index and second parameter
    //is the value we want to store
    void setValue(int, int);

    //returns the value of a given index
    //index will be passed as parameter
    int getValue(int);

};


#endif // DYNARR_H_INCLUDED
