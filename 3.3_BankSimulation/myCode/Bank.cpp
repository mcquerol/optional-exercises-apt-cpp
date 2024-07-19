#include "Bank.h"
#include <iostream>
#include <algorithm>

unsigned int Bank::nextCustomerId = 1000;  // Starting from 1000 for customer IDs

Bank::Bank(unsigned int maxNoOfCustomers, unsigned int maxNoOfAccounts, unsigned int maxNoOfTransactions)
    : maxNoOfCustomers(maxNoOfCustomers), maxNoOfAccounts(maxNoOfAccounts), maxNoOfTransactions(maxNoOfTransactions){}

Bank::~Bank(){}

void Bank::addCustomer(const std::string& firstName, const std::string& lastName)
{
    if (customers.size() >= maxNoOfCustomers) //check that the number of customers is less than the max
    {
        std::cerr << "Maximum number of customers reached." << std::endl;
        return;
    }

    static unsigned int nextCustomerId = 1000; // Starting ID for customers
    customers[nextCustomerId++] = Customer(firstName, lastName);
}

void Bank::deleteCustomer(unsigned int customerId)
{
    customers.erase(customerId);
}

void Bank::performTransaction(unsigned int sourceAccountId, unsigned int targetAccountId, double amount, Poco::DateTime transactionDate)
{

    Account* sourceAccount = nullptr;
    Account* targetAccount = nullptr;
    Customer* sourceCustomer = nullptr;
    Customer* targetCustomer = nullptr;

    // Find source and target accounts along with their respective customers
    for (auto& customerPair : customers) {
        Customer& customer = customerPair.second;
        for (auto& account : customer.getAccounts()) {
            if (account->getAccountId() == sourceAccountId) {
                sourceAccount = account;
                sourceCustomer = &customer;
            }
            if (account->getAccountId() == targetAccountId) {
                targetAccount = account;
                targetCustomer = &customer;
            }
        }
    }

    // Perform transaction if both accounts are found
    if (sourceAccount && targetAccount) {
        Transaction* transaction = new Transaction(sourceAccount, targetAccount, amount, transactionDate);
        transaction->performTransaction();

        // Add transaction to the source customer
        if (sourceCustomer) {
            sourceCustomer->addTransaction(transaction);
        }
        // Add transaction to the target customer if different
        if (targetCustomer && targetCustomer != sourceCustomer) {
            targetCustomer->addTransaction(transaction);
        }
    } else {
        std::cerr << "Invalid account IDs provided for transaction." << std::endl;
    }
}

void Bank::generateReport()
{
    std::cout << "Transaction Report:" << std::endl;
    for (const auto& customerPair : customers)
    {
        const Customer& customer = customerPair.second;
        std::cout << "Customer ID: " << customerPair.first << ", Name: " << customer.getFirstName() << " " << customer.getLastName() << std::endl;
        const auto& accounts = customer.getAccounts();
        for (const auto& account : accounts)
        {
            std::cout << "  Account ID: " << account->getAccountId() << ", Balance: " << account->getBalance() << std::endl;
        }

        const auto& transactions = customer.getTransactions();
        for (const auto& transaction : transactions)
        {
            std::cout << "  Date: " << transaction->getTransactionDate().day() << "/" << transaction->getTransactionDate().month() << "/" << transaction->getTransactionDate().year()
            << ", Amount: " << transaction->getTransactionAmount() << ", Target Account ID: " << transaction->getTargetAccount()->getAccountId() << std::endl;
        }
    }
}

std::map<unsigned int, Customer>& Bank::getCustomers()
{
    return customers;
}
