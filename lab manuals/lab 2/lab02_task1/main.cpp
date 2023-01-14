
///task1

#include <iostream>
#include "dynarr.h"
using namespace std;

int main() {

   //Performing all tasks mentioned in statement

   //1. Creating two objects of dynArr class

   dynArr obj1();   // One with no constructor argument

   dynArr obj2(5);   // One with argument 5

   //2. Taking five input values from user and store them in array inside second object

   cout << "Enter five values: " << endl;

   for (int i=0; i<5; i++) {   // Iterating five times

       int value;
       cin >> value;
       obj2.setValue(i, value);
   }

   //3. For second object, printing all values stored

   cout << "\nValues inside array of Second object" << endl;

   for(int i=0; i<5; i++) {

       cout << obj2.getValue(i) << " ";
   }

   return 0;
}
