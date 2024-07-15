#include "Transaction.h"

Transaction::Transaction(Account* sourceAccount, Account* targetAccount, double amount, Poco::DateTime transactionDate)
    : sourceAccount(sourceAccount), targetAccount(targetAccount), amount(amount), transactionDate(transactionDate)
{

}

Transaction::~Transaction()
{

}

bool Transaction::verifyTransaction() //check if either account is <=0 before transferring money
{
	if (sourceAccount->getBalance() <= 0 || targetAccount->getBalance() <=0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Transaction::performTransaction()
{
	if(!verifyTransaction())
	{
		amount = abs(amount); //do not allow negative balance
	}
	sourceAccount->updateBalance(-amount); //take money from source account
	targetAccount->updateBalance(amount); //put money in target account
}

double Transaction::getTransactionAmount() const
{
    return amount;
}

Account* Transaction::getSourceAccount() const
{
    return sourceAccount;
}

Account* Transaction::getTargetAccount() const
{
    return targetAccount;
}

Poco::DateTime Transaction::getTransactionDate() const
{
    return transactionDate;
}
