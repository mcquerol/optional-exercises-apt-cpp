/*
 * main.cpp
 *
 *  Created on: 11 Jul 2024
 *      Author: mateo
 */

#include <iostream>
#include "Bank.h"

int main()
{
    Bank bank(100, 100, 100);

    // Adding customers
    bank.addCustomer("Paul", "Panther");
    bank.addCustomer("Whoopie", "Goldberg");

    // Creating accounts for customers
    auto& customers = bank.getCustomers();

    customers[1000].createAccount(100);
    customers[1001].createAccount(100);

    // Performing some transactions
    Poco::DateTime date(1998,01,12);
    bank.performTransaction(100000, 100001, 50.0, date);


    // Generating reports after each step
    bank.generateReport();

    // Trying to create an account for a non-existing customer
    // This will throw an error because customer ID 1002 does not exist
    if (customers.find(1002) != customers.end()) {
        customers[1002].createAccount(0.0);
    } else {
        std::cerr << "Customer ID 1002 does not exist." << std::endl;
    }
    // Generating reports after each step
    bank.generateReport();

    // Performing some transactions
    Poco::DateTime date2(2012,02,12);
    bank.performTransaction(100000, 100001, 50.0, date2);

    // Generating reports after each step
    bank.generateReport();

    // Deleting an account
    if (customers.find(1000) != customers.end()) {
        customers[1000].deleteAccount(100000);
    } else {
        std::cerr << "Customer ID 1000 does not exist." << std::endl;
    }
    // Generating reports after each step
    bank.generateReport();

    // Deleting a customer
    bank.deleteCustomer(1000);

    // Generating reports after each step
    bank.generateReport();

    return 0;
}
