
///Print the  n integers of the array in the reverse order, space-separated on a single line.

#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        {
        cin >> arr[i];
    }
    for(int k = n-1; k > -1; k--)
    {
        cout << arr[k] << " ";
    }
    return 0;
}
