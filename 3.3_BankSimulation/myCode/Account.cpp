/*
 * Account.cpp
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#include "Account.h"



Account::Account(double initialBalance) : accountId(nextId++), balance(initialBalance)
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
