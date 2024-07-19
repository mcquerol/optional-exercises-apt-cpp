/*
 * Account.cpp
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#include "Account.h"

unsigned int Account::nextId = 100000;

Account::Account(double initialBalance) : accountId(Account::nextId++), balance(initialBalance){}

Account::~Account(){}

unsigned int Account::getAccountId() const
{
	return accountId;
}

double Account::getBalance() const
{
	return balance;
}

void Account::updateBalance(double amount)
{
	balance += amount;
}
