/*
Name: Andrew Kim
Date: March 25, 2021
Program: See It In Action

I hereby certify that this program represents my
work and that the design and logic was completed
without outside assistance.

Signature: Andrew Kim
*/

#include <iostream>
#include <iomanip>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;


int main()
{
    // Basic Account
    {
        // Create account and display balance
        Account basicAccount(5.12);
        cout << "Basic Account Balance (USD): " << basicAccount.getBalance()
            << endl;

        // Deposit $1.27 and display balance
        basicAccount.credit(1.27);
        cout << endl 
            << "Deposited $1.27.\nCurrent Basic Account Balance (USD): "
            << basicAccount.getBalance() << endl << endl;

        // Attempt to withdraw more than current balance and display balance
        cout << "Attempting to withdraw $8.07..." << endl;
        basicAccount.debit(8.07);
        cout << "Current Basic Account Balance (USD): " 
            << basicAccount.getBalance()
            << endl << endl;

        // Withdraw money and display balance
        cout << "Attempting to withdraw $1.51..." << endl;
        basicAccount.debit(1.51);
        cout << "Current Basic Account Balance (USD): " 
            << basicAccount.getBalance() << endl << endl << endl << endl;
    }

    // Savings Account
    {
        // Following works identical to a Basic Account
        SavingsAccount savingsAccount(5.12, 1.53); // 1.53% interest
        cout << "Savings Account Balance (USD): " 
            << savingsAccount.getBalance() << endl;

        savingsAccount.credit(1.27);
        cout << endl 
            << "Deposited $1.27.\nCurrent Savings Account Balance (USD): "
            << savingsAccount.getBalance() << endl << endl;

        cout << "Attempting to withdraw $8.07..." << endl;
        savingsAccount.debit(8.07);
        cout << "Current Savings Account Balance (USD): " 
            << savingsAccount.getBalance() << endl << endl;

        cout << "Attempting to withdraw $1.51..." << endl;
        savingsAccount.debit(1.51);
        cout << "Current Savings Account Balance (USD): " 
            << savingsAccount.getBalance() << endl << endl;

        // Add interest (Savings Account exclusive feature) and display balance
        savingsAccount.credit(savingsAccount.calculateInterest());
        cout << "Current Savings Account Balance (USD) after one period of "
            << "interest: " << savingsAccount.getBalance() << endl << endl 
            << endl << endl;
    }

    // Checking Account
    {
        // Following works nearly identical to a Basic Account, but applies a
        // fee after each successful transaction
        CheckingAccount checkingAccount(5.12, 0.02); // 2 cent fee
        cout << "Checking Account Balance (USD): "
            << checkingAccount.getBalance() << endl;

        checkingAccount.credit(1.27);
        cout << endl
            << "Deposited $1.27.\nCurrent Checking Account Balance (USD): "
            << checkingAccount.getBalance() << endl << endl;

        cout << "Attempting to withdraw $8.07..." << endl;
        checkingAccount.debit(8.07);
        cout << "Current Checking Account Balance (USD): "
            << checkingAccount.getBalance() << endl << endl;

        cout << "Attempting to withdraw $1.51..." << endl;
        checkingAccount.debit(1.51);
        cout << "Current Checking Account Balance (USD): "
            << checkingAccount.getBalance() << endl << endl;
    }
}
