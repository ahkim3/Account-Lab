#pragma once
#include "Account.h"


class CheckingAccount :
    public Account
{
public:
    CheckingAccount(double, double);
    ~CheckingAccount();

    void credit(double);
    void debit(double);

private:
    double fee; // Fee charged per transaction
};

