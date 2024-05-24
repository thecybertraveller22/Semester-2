#ifndef TASK1_H_
#define TASK1_H_

class BankAccount
{
    private:
        int accountID;
        int balance;

    public:
        BankAccount();
        BankAccount(int acc_ID,int b);
        int setID(int acc_ID);
        int setBalance(int b);
        int getID();
        int getbalance();
        int balanceInquiry();
};

class CurrentAccount : public BankAccount
{
    public:
        CurrentAccount(int acc_ID,int b);
        void amountWithDrawn(int amount);
        void amountDeposit(int amount);
};

class SavingsAccount : public BankAccount
{
    public:
        SavingsAccount(int acc_ID,int b);
        void amountWithDrawn(int amount);
        void amountDeposit(int amount);
};


#endif