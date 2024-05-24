#include<iostream>
#include"task1.h"

using namespace std;

BankAccount::BankAccount()
{
    cout<<"DEfault of bank called"<<endl;
    cout<<endl;
}

BankAccount::BankAccount(int acc_ID,int b)
{
    cout<<"Parameterised Called of BankAccount"<<endl;
    cout<<endl;
    accountID = acc_ID;
    balance = b;
}

int BankAccount::getbalance()
{
    return balance;
}

int BankAccount::getID()
{
    return accountID;
}

int BankAccount::balanceInquiry()
{
    cout<<"The current amount you have in your account is = "<<balance<<endl;

    return 0;
}

int BankAccount::setID(int acc_ID)
{
    accountID = acc_ID;

}

int BankAccount::setBalance(int b)
{
    balance = b;
}


CurrentAccount::CurrentAccount(int acc_ID,int b)
{
    setID(acc_ID);
    setBalance(b);
}

void CurrentAccount::amountWithDrawn(int amount)
{
    int left;

    left = getbalance()-amount;

    if(left<=10000)
    {
        cout<<"Cannot withdraw amount as minimum balance should not decrease 10000"<<endl;
        
    }
    else
    {
        cout<<"Your new balance for accout number "<<getID()<<" after amount withdraw is = "<<left<<endl;
    }
}

void CurrentAccount::amountDeposit(int amount)
{
    int left;

    left = getbalance()+amount;

    cout<<"Your new balance for accout number "<<getID()<<" after amount withdraw is = "<<left<<endl;
    
}

// savings

SavingsAccount::SavingsAccount(int acc_ID,int b)
{
    setID(acc_ID);
    setBalance(b);
}

void SavingsAccount::amountWithDrawn(int amount)
{
    int left;

    left = getbalance()-amount;

    if(left<=5000)
    {
        cout<<"Cannot withdraw amount as minimum balance should not decrease 10000"<<endl;
        
    }
    else
    {
        cout<<"Your new balance for accout number "<<getID()<<" after amount withdraw is = "<<left<<endl;
    }
}

void SavingsAccount::amountDeposit(int amount)
{
    int left;

    left = getbalance()+amount;

    cout<<"Your new balance for accout number "<<getID()<<" after amount withdraw is = "<<left<<endl;
    
}

int main()
{
    CurrentAccount c1(1234,15000);
    SavingsAccount s1(1567,25000);

    c1.balanceInquiry();
    s1.balanceInquiry();
    cout<<endl;
    c1.amountWithDrawn(500);
    c1.amountDeposit(600);
    cout<<endl;
    s1.amountWithDrawn(500);
    s1.amountDeposit(1000);
  
    

    return 0;
}