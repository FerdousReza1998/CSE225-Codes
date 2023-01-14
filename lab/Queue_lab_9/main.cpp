#include <iostream>
#include "quetype.h"
#include "quetype.cpp"


using namespace std;

// n is size of coins array (number of different coins)
int calCoins(int coins[], int n, int amount) //Function to calculate the number of coins
{
    // table[i] will be storing the minimum number of coins
    // required for i value. So table[amount] will have result
    int table[amount+1];

    // Base case (If given value amount is 0)
    table[0] = 0;

    // Initialize all table values as Infinite
    for (int i=1; i<=amount; i++)
        table[i] = INT_MAX;

    // Compute minimum coins required for all
    // values from 1 to amount
    for (int i=1; i<=amount; i++)
    {
        // Go through all coins smaller than i
        for (int j=0; j<n; j++)
        if (coins[j] <= i)
        {
            int sub_res = table[i-coins[j]];
            if (sub_res != INT_MAX && sub_res + 1 < table[i])
                table[i] = sub_res + 1;
        }
    }

    if(table[amount]==INT_MAX) //i.e. not found
        return -1;

    return table[amount];
}

int main() //Main function
{
    QueType<int> obj; //Create the object of Queue

    if(obj.IsEmpty()) //Check if queue is empty or not
    {
        cout<<"queue is empty\n";
    }
    else
    {
        cout<<"queue is not empty\n";
    }
    //Insert elements in Queue
    obj.Enqueue(5);
    obj.Enqueue(7);
    obj.Enqueue(4);
    obj.Enqueue(2);

    if(obj.IsEmpty()) //Again check if queue is empty
    {
        cout<<"queue is empty\n";
    }
    else
    {
        cout<<"queue is not empty\n";
    }

    QueType<int> obj1; //Declare one more object of queue, which will keep copy of object obj
    //Loop to display the element of queue in same order
    while(1)
    {
        if(obj.IsEmpty())
            break; //Break if queu is empty
        int front = obj.front_element();
        obj1.Enqueue(front); //Insert element in obj1 (i.e. make copy of obj)
        cout<<front<<" ";
        obj.Dequeue(front); //Remove the front element from obj, so that we can get all elements from queue
    }
    cout<<"\n";
    //Note: Obj1 hold the copy of obj

    if(obj1.IsFull()) //Check if queue is full or not
    {
        cout<<"queue is full\n";
    }
    else
        cout<<"queue is not full\n";

    //To display dequeu function, dequeue all elements from obj1 untill queue is not empty
    while(!obj1.IsEmpty())
    {
        int front = obj1.front_element();
        cout<<"Element "<<front<<" removed from Queue\n";
        obj1.Dequeue(front); //Dequeue functionality
    }

    cout<<"==================================================\n\n";
    //Now, program is for calculating the number of coin to make the given amount
    int n, amount;
    cout<<"Give input for calculating no of coins: "; //Take input from user
    cin>>n;
    int coins[n];
    for(int i = 0; i < n; ++i)
        cin>>coins[i];
    cin>>amount;

    cout<<"Coinse reqired to make amount of "<<amount<<" is "<<calCoins(coins, n, amount); //Call funciton

    return 0;
}
