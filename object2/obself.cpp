#include <string>

class Account{
public:
    Account(std::string accountName, int initialBalance)
    : name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    void withdraw(int withdrawAmount) {
        if (withdrawAmount > balance) {
            std::cout << "\nwithdrawal amount exceeded account balance.";
        }

        if (withdrawAmount <= balance) {
            balance = balance - withdrawAmount
        }
    }
    int getBalance() const {
        return balance;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
    int balance{0};
};


#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account1{"John Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "account2: " << account2.getName() << "balance is $" << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding" << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is #" << account1.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding" << depositAmount << "to account@ balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2" << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter withdraw amount for account1: ";
    int withdrawAmount;
    cin >> withdrawAmount;
    cout << "subtracting " << withdrawAmount << " from account1 balance";
    account1.withdraw(withdrawAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account.getBalance();

    cout << "\n\nEnter withdraw amount for account2: "
    cin >> withdrawAmount;
    cout << "subtracting " << withdrawAmount << " from account2 balance";
    account2.withdraw(withdrawAmount);

    cout << "\n\naccount1: "<< account1.getName() << "balance is $" << account1.getBalance();
    cout << "\naccounmt2: " << account2.getName() << "balamce is $" << account2.getBalance(); 
}