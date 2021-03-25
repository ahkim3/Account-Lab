#pragma once


class Account
{
public:
	Account(double);
	~Account();

	void credit(double);
	bool debit(double);
	double getBalance();

protected:
	double balance;
};

