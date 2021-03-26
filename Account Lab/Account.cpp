#include "Account.h"
#include <iostream>

using namespace std;


// Default constructor
Account::Account()
{
	balance = 0.0;
}


// Custom constructor validates initial balance to ensure it's >= 0.0
Account::Account(double amount)
{
	if (amount >= 0.0) // Valid
		balance = amount;
	else // Invalid; set balance to 0.0
	{
		balance = 0.0;
		cout << "The provided initial balance was invalid." << endl;
	}
}


// Default destructor
Account::~Account()
{
}


// Adds an amount to the current balance
void Account::credit(double amount)
{
	balance += amount;
}


// Withdraws money from the Account after ensuring sufficient funds exist.
// Returns true if successful, false if unsuccessful.
bool Account::debit(double amount)
{
	double potentialBalance = balance - amount;

	if (potentialBalance >= 0.0) // Sufficient funds exist
	{
		balance = potentialBalance;
		return true;
	}
	else // Insufficient funds; withdrawal failed
	{
		cout << "Debit amount exceeded account balance." << endl;
		return false;
	}

}


// Returns the current balance
double Account::getBalance()
{
	return balance;
}
