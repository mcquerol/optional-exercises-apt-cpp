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

	static unsigned int accountID;
	double balance;
	//Customer customer; //TODO very account belongs to a user..?? check if this is the correct way



public:
	Account();
	~Account();

	double getBalance() const;
	void setBalance(double balance);

};

#endif /* ACCOUNT_H_ */
