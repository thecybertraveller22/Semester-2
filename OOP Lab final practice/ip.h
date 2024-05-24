#ifndef IP_H_
#define IP_H_

class BankAccount
{
    private:
        int accountid;
        int balance;
    public:
        BankAccount();
        BankAccount(int acc_id,int b);
        void set_acc_id(int acc_id);
        void set_balance(int b);
        int balanceInquiry(); //tells the current balance
        int get_accountid(); // tells the account id 
};

class CurrentAccount : public BankAccount
{
    public:
        CurrentAccount(int acc_id,int b);
        int amount_withdraw(int amount); // min balance should not decrease 5000
        void deposit_amount(int amount);
};

class SavingsAccount : public BankAccount
{
    public:
        SavingsAccount(int acc_id,int b);
        int amount_withdraw(int amount); // min balance not below 10000
        void deposit_amount(int amount);
};

#endif