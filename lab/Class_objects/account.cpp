#include "account.h"
#include<iostream>

using namespace std;

AccountHolder::AccountHolder(int ini_balance)
{
    balance = ini_balance;
}

void AccountHolder::deposit(int amount)
{
    balance = balance + amount;
}

void AccountHolder::checkBalance()
{
    cout<<"your account balance"<<balance<<endl;
}
