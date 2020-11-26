//
// Created by Sebastian on 26/11/2020.
//

#ifndef ACCOUNTCLASSINHERITANCE_ACCOUNT_UTILS_H
#define ACCOUNTCLASSINHERITANCE_ACCOUNT_UTILS_H

#include <vector>
#include "Savings_Account.h"
#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

//Utility Helper Functions for Account Class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

//Utility Helper Functions for Savings_Account Class
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

//Utility Helper Functions for Checking_Account Class
void display(const std::vector<Checking_Account> &accounts);
void deposit(std::vector<Checking_Account> &accounts, double amount);
void withdraw(std::vector<Checking_Account> &accounts, double amount);

//Utility Helper Functions for Trust_Account Class
void display(const std::vector<Trust_Account> &accounts);
void deposit(std::vector<Trust_Account> &accounts, double amount);
void withdraw(std::vector<Trust_Account> &accounts, double amount);

#endif //ACCOUNTCLASSINHERITANCE_ACCOUNT_UTILS_H
