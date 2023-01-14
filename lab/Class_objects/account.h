#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class AccountHolder
{
   private:
       int balance;
       int acc_num;
   public:
       void deposit(int);
       void checkBalance();
       AccountHolder(int);

};

#endif // ACCOUNT_H_INCLUDED
