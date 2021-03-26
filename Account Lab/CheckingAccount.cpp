#include "CheckingAccount.h"
#include <iostream>

using namespace std;


// Custom constructor receives intial balance and interest fee and validates
// initial balance to ensure it's >= 0.0
CheckingAccount::CheckingAccount(double initialBalance, double initialFee)
{
	fee = initialFee;

	if (initialBalance >= 0.0) // Valid
		balance = initialBalance;
	else // Invalid; set balance to 0.0
	{
		balance = 0.0;
		cout << "The provided initial balance was invalid." << endl;
	}
}


CheckingAccount::~CheckingAccount()
{
}


// Subtracts fee after crediting account
void CheckingAccount::credit(double amount)
{
	Account::credit(amount);
	balance -= fee;
}


// Subtracts fee after successfully debiting account
void CheckingAccount::debit(double amount)
{
	if (Account::debit(amount))
		balance -= fee;
}
