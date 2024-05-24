/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include<iostream>

using namespace std;

class Account 
{
    private:
        float balance;

    public:

    Account()
    {
        balance=0.0;
    }

    void deposit()
    {
        float amount;

        cout<<"Enter the amount of money u wish to add to your account = ";
        cin >> amount; 

        balance += amount;
    }

    bool withdraw()
    {
        float withdraw_money;

        cout<<"Enter the money u wish to withdraw = ";
        cin >> withdraw_money;

        if(balance<withdraw_money)
        {
            cout<<"A penalty of $5 has been charged as u have attempted to withdraw more money than in the account"<<endl;
            balance = balance - 5;

            return false;
        }
        else
        {
            balance = balance - withdraw_money;

            return true;
        }

    }

    float inquire()
    {
        return balance;
    }
};

/*int main()
{
    float amount;

    Account a1;
    
    a1.deposit(amount);

    a1.withdraw(amount);

    float current_balance = a1.inquire();

    cout<<"The current balance is = "<<current_balance<<endl;

    return 0;
}*/

int main()
{
    Account a1;

    a1.deposit();

    bool success = a1.withdraw();

    if (success) 
    {
        cout << "Withdrawal successful" << endl;
    } 
    else
    {
        cout << "Withdrawal failed" << endl;
    }

    float balance = a1.inquire();
    cout << "Current balance: " << balance << endl;

    return 0;
}
