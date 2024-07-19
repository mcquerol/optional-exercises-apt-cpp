#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <vector>
#include "Account.h"
#include "Transaction.h"

class Customer {
private:
    std::string firstName;
    std::string lastName;
    std::vector<Account*> accounts; // Vector of Account pointers
    std::vector<Transaction*> transactions;

public:
    Customer();
    Customer(const std::string& firstName, const std::string& lastName);
    ~Customer();

    void createAccount(double initialBalance = 0.0);
    void deleteAccount(unsigned int accountId);
    void addTransaction(Transaction* transaction);

    const std::vector<Transaction*>& getTransactions() const;
    const std::vector<Account*>& getAccounts() const; // Correct the return type

    std::string getFirstName() const;
    std::string getLastName() const;
};

#endif /* CUSTOMER_H_ */
