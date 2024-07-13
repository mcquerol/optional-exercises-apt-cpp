/*
 * Transaction.h
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <Poco/Data/Date.h>

#include "Account.h"

class Transaction
{
private:

	double amount = 0.0;
	Account* sourceAccount, targetAccount;
	Poco::Data::Date transactionDate;

public:

	Transaction(const Account* sourceAccount, const Account* targetAccount, double amount);
	~Transaction();


	void performTransaction(unsigned int sourceAccountId, unsigned int targetAccountId, double amount, Poco::Data::Date transactionId);

	double getTransactionAmount() const;
	Account* getSourceAccount() const;
	Account* getTargetAccount() const;
	Poco::Data::Date getTransactionDate() const;


};

#endif /* TRANSACTION_H_ */
