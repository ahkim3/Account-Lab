#include "SavingsAccount.h"
#include <iostream>

using namespace std;


// Custom constructor receives intial balance and interest rate and validates
// initial balance to ensure it's >= 0.0
SavingsAccount::SavingsAccount(double initialBalance, double initialInterest)
{
	if (initialBalance >= 0.0) // Valid
	{
		balance = initialBalance;
		interestRate = initialInterest;
	}
	else // Invalid; set balance to 0.0
	{
		balance = 0.0;
		cout << "The provided initial balance was invalid." << endl;
	}
}


// Default destructor
SavingsAccount::~SavingsAccount()
{
}


// Determines the amount of interest earned
double SavingsAccount::calculateInterest()
{
	// Multiplies interest rate by account balance
	return (interestRate * balance);
}
