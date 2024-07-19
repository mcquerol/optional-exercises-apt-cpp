/*
 * Transaction.h
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <Poco/DateTime.h>

#include "Account.h"

class Transaction
{
private:

    Account* sourceAccount; // Pointer to the source account
    Account* targetAccount; // Pointer to the target account
    double amount;
    Poco::DateTime transactionDate;

public:
    Transaction(Account* sourceAccount, Account* targetAccount, double amount, Poco::DateTime transactionDate);
    ~Transaction();

    void performTransaction();

    bool verifyTransaction() const;
    double getTransactionAmount() const;
    Account* getSourceAccount() const;
    Account* getTargetAccount() const;
    Poco::DateTime getTransactionDate() const;

    bool verifyTransaction();
};

#endif /* TRANSACTION_H_ */

