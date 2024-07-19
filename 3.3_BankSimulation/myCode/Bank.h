#ifndef BANK_H_
#define BANK_H_

#include <string>
#include <map>
#include <memory>
#include <Poco/DateTime.h>
#include "Customer.h"
#include "Account.h"
#include "Transaction.h"

class Bank {
private:
	static unsigned int nextCustomerId;

    unsigned int maxNoOfCustomers;
    unsigned int maxNoOfAccounts;
    unsigned int maxNoOfTransactions;

    std::map<unsigned int, Customer> customers;
    std::map<unsigned int, std::unique_ptr<Account>> accounts;

public:
    Bank(unsigned int maxNoOfCustomers, unsigned int maxNoOfAccounts, unsigned int maxNoOfTransactions);
    ~Bank();

    void addCustomer(const std::string& firstName, const std::string& lastName);
    void deleteCustomer(unsigned int customerId);
    void performTransaction(unsigned int sourceAccountId, unsigned int targetAccountId, double amount, Poco::DateTime transactionDate);
    void generateReport();

    std::map<unsigned int, Customer>& getCustomers();
};

#endif /* BANK_H_ */
