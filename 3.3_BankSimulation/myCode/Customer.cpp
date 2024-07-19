#include "Customer.h"
#include <algorithm> // For std::remove_if

Customer::Customer() : firstName(""), lastName("") {}

Customer::Customer(const std::string& firstName, const std::string& lastName) : firstName(firstName), lastName(lastName){}

Customer::~Customer(){}

void Customer::createAccount(double initialBalance)
{
    accounts.push_back(new Account(initialBalance));
}

void Customer::deleteAccount(unsigned int accountId)
{
	accounts.pop_back();
}

void Customer::addTransaction(Transaction* transaction)
{
    transactions.push_back((transaction));
}

const std::vector<Transaction*>& Customer::getTransactions() const
{
    return transactions;
}

const std::vector<Account*>& Customer::getAccounts() const
{
    return accounts;
}

std::string Customer::getFirstName() const {
    return firstName;
}

std::string Customer::getLastName() const {
    return lastName;
}
