/*
 * Bank.h
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#ifndef BANK_H_
#define BANK_H_

#include <string>
#include <map>
#include <memory>
#include <Poco/Data/Date.h>


#include "Customer.h"
#include "Account.h"

class Bank
{
private:

	unsigned int maxNoOfCustomers;
	unsigned int maxNoOfAccounts;
	unsigned int maxNoOfTransactions;

	std::map<unsigned int, Customer> customers;
	std::map<unsigned int, std::unique_ptr<const Account>> accounts;

public:

	Bank(unsigned int maxNoOfCustomers, unsigned int maxNoOfAccounts, unsigned int maxNoOfTransactions);
	~Bank();

	void addCustomer(std::string firstName, std::string lastName); //TODO check this
	void deleteCustomer(std::string firstName, std::string lastName); //TODO check this
	void performTransaction(unsigned int sourceAccountId, unsigned int targetAccountId, double amount, Poco::Data::Date transactionId);
	void GenerateReport();

};

#endif /* BANK_H_ */
