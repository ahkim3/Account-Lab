#include "SavingsAccount.h"


// Custom constructor receives intial balance and interest rate
SavingsAccount::SavingsAccount(double initialBalance, double initialInterest)
{
	interestRate = initialInterest;
}


// Default destructor
SavingsAccount::~SavingsAccount()
{
}


// Determines the amount of interest earned
double SavingsAccount::calculateInterest()
{
	// Multiplies interest rate by account balance
	return 0.0;
}
