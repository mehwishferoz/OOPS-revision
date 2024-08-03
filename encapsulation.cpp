#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
    int accno;
    double balance;

    public:
    BankAccount(int a = 0, double b = 0) : accno(a), balance(b)
    {}

    int getAccno() const {
        return this->accno;
    }

    double getBalance() const {
        return this->balance;
    }

    void deposit(double amt){
        if(amt>0){
            this->balance+=amt;
        }
    }
    
    void withdraw(double amt){
        if(amt>0 && amt<=this->balance){
            this->balance-=amt;
        }
    }

    void displayAccountInfo() const {
        cout << "Account Number: " << this->accno << endl;
        cout << "Balance: " << this->balance << endl;
    }
};

int main()
{
    BankAccount myAccount(1, 12000.0);
    // Accessing the encapsulated data using public methods
    myAccount.displayAccountInfo();

    // Depositing money
    myAccount.deposit(500.0);
    cout << "After deposit: " << endl;
    myAccount.displayAccountInfo();

    // Withdrawing money
    myAccount.withdraw(300.0);
    cout << "After withdrawal: " << endl;
    myAccount.displayAccountInfo();

    return 0;
}