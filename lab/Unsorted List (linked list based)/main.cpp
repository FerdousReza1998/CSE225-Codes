#include<iostream>
using namespace std;

int main(){
        // Variable for m and n
        int m, n;
        // Take m as input
        cin >> m;
        // Create array to store first array
        int arr1[m];
        // Taking input of first array
        for(int i = 0; i < m; i++){
                cin >> arr1[i];
        }
        // Take m as input
        cin >> n;
        // Create array to store second array
        int arr2[n];
        // Taking input of second array
        for(int i = 0; i < n; i++){
                cin >> arr2[i];
        }
        // Take a variable for current index of arr1
        int i = 0;
        // Take a variable for current index of arr2
        int j = 0;
        // Create an array to store sorted array
        int sorted[m + n];
        // Take a variable for current index to store at sorted array
        int k = 0;
        // Continue until both arrays have elements yet to store in sorted array
        while(i < m && j < n){
                // If arr1[i] is less than arr2[j]
                // Then store arr1[i] in sorted array at kth index
                // Else place arr2[j] in sorted array at kth index
                if(arr1[i] < arr2[j]){
                        sorted[k] = arr1[i];
                        k = k + 1;
                        i = i + 1;
                }else{
                        sorted[k] = arr2[j];
                        k = k + 1;
                        j = j + 1;
                }
        }
        // If there are no elements in second array,
        // Then place arr1[i] in sorted array at kth index
        while(i < m){
                sorted[k] = arr1[i];
                k = k + 1;
                i = i + 1;
        }
        // If there are no elements in first array,
        // Then place arr2[j] in sorted array at kth index
        while(j < n){
                sorted[k] = arr2[j];
                k = k + 1;
                j = j + 1;
        }
        // Print the sorted array
        for(int i = 0; i < m + n; i++){
                cout << sorted[i] << " ";
        }
        cout << endl;
        return 0;
}
