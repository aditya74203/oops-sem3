// create a class account and loan use a ff to calculate total financial amount of a customer.

#include <iostream>
using namespace std;

class Loan;

class Account {
    private:
        int accountBalance;
    public:
    Account(int balance) {
        accountBalance = balance;   
}

    friend int calculateTotal(Account a, Loan l);
};  

class Loan {
    private:
        int loanAmount;
    public:
    Loan(int amount) {
        loanAmount = amount;   
}

    friend int calculateTotal(Account a, Loan l);
};

int calculateTotal(Account a, Loan l) {
    return a.accountBalance + l.loanAmount;
}

int main() {
    Account account(1000);
    Loan loan(500);

    int total = calculateTotal(account, loan);

    cout << "Account Balance = 1000" << endl;
    cout << "Loan Amount = 500" << endl;
    cout << "Total Financial Amount = " << total << endl;

    return 0;
}