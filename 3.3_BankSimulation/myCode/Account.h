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

	static unsigned int accountId;
	double balance;

public:
	Account(unsigned int initialBalance);
	~Account();

	unsigned int getAccountId() const;
	double getBalance() const;
	void setBalance(double amount);

};

#endif /* ACCOUNT_H_ */
