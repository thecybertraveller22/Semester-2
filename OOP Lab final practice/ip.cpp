#include<iostream>
#include"ip.h"
using namespace std;

BankAccount::BankAccount()
{
    cout<<"DEfault of bank called"<<endl;
    cout<<endl;
}

BankAccount::BankAccount(int acc_id,int b)
{
    cout<<"Parameterised Called of BankAccount"<<endl;
    cout<<endl;
    accountid = acc_id;
    balance = b;
}

int BankAccount::balanceInquiry()
{
    return balance;
}

int BankAccount::get_accountid()
{
    return accountid;
}

void BankAccount::set_acc_id(int acc_id)
{
    accountid = acc_id;
}

void BankAccount::set_balance(int b)
{
    balance = b;
}

CurrentAccount::CurrentAccount(int acc_id,int b)
{
    set_acc_id(acc_id);
    set_balance(b);
}

int CurrentAccount::amount_withdraw(int amount)
{
    int amount_left;

    amount_left = balanceInquiry() - amount;

    if(amount_left<5000)
    {
        cout<<"Transaction denied"<<endl;
    } 
    else
    {
        cout<<"Your new balance for account number "<<get_accountid()<<" is = "<<amount_left<<endl;
    }
    return 0;
}

void CurrentAccount::deposit_amount(int amount)
{
    int amount_new;

    amount_new = amount + balanceInquiry();

    cout<<"Your new balance for account number "<<get_accountid()<<" is = "<<amount_new<<endl;
    
}

SavingsAccount::SavingsAccount(int acc_id,int b)
{
    set_acc_id(acc_id);
    set_balance(b);
}

int SavingsAccount::amount_withdraw(int amount)
{
    int amount_left;

    amount_left = balanceInquiry() - amount;

    if(amount_left<10000)
    {
        cout<<"Transaction denied"<<endl;
    }
    else
    {
        cout<<"Your new balance for account number "<<get_accountid()<<" is = "<<amount_left<<endl;
    }
    return 0;
}


void SavingsAccount::deposit_amount(int amount)
{
    int amount_new;

    amount_new = amount + balanceInquiry();

    cout<<"Your new balance for account number "<<get_accountid()<<" is = "<<amount_new<<endl;
}

int main()
{
    CurrentAccount c1(1668, 20000);
    SavingsAccount s1(1552, 50000);

    cout<<c1.balanceInquiry()<<endl;
    cout<<s1.balanceInquiry()<<endl;
    cout << endl;
    c1.amount_withdraw(500);
    c1.deposit_amount(600);
    cout << endl;
    s1.amount_withdraw(500);
    s1.deposit_amount(1000);

    return 0;
}