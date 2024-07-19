/*
 * Account.h
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account
{

private:

    static unsigned int nextId; // Static member to generate unique account IDs
    unsigned int accountId; // Unique account ID
	double balance;

public:
	Account(double initialBalance);
	~Account();

	unsigned int getAccountId() const;
	double getBalance() const;
	void updateBalance(double amount);

};

#endif /* ACCOUNT_H_ */
