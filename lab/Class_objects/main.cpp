
#include <iostream>
#include "account.h"

using namespace std;

int main()
{


    int balance_inp;

    cout<<"please enter initial balance"<<endl;
    cin>>balance_inp;

    AccountHolder captainPlanet(balance_inp);
    captainPlanet.checkBalance();


    return 0;
}
