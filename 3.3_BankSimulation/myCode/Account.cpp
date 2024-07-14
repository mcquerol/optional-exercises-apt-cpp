/*
 * Account.cpp
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#include "Account.h"

static unsigned int Account::accountId = 100000;

Account::Account(double initialBalance) : balance(initialBalance), accountId(Account::accountId++)
{

}

Account::~Account()
{

}

unsigned int Account::getAccountId() const
{
	return accountId;
}

double Account::getBalance() const
{
	return balance;
}

void Account::setBalance(double amount)
{
	balance += amount;
}
