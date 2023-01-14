
///task 2

#include <iostream>
#include "dynarr.h"
using namespace std;
int main()
{
    cout << "\nCreating object of size 5:\n";
    dynArr object2(5);
    cout << "Enter 5 values:\n";
    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        object2.setValue(i, x);
    }
    cout << "Enter new size:\n";
    int s;
    cin >> s;
    object2.allocate(s);
    cout << "Show size difference by adding data\n";
    for (int i = 0; i < s; i++)
        cout << object2.getValue(i) << " ";
    cout << "\nDone!\n";
    return 0;
}
