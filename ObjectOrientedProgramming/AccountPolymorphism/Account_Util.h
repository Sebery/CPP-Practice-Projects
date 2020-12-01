//
// Created by Sebastian on 30/11/2020.
//

#ifndef ACCOUNTPOLYMORPHISM_ACCOUNT_UTIL_H
#define ACCOUNTPOLYMORPHISM_ACCOUNT_UTIL_H

#include <vector>
#include "Account.h"


// Utility helper functions for Account objects

void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);




#endif //ACCOUNTPOLYMORPHISM_ACCOUNT_UTIL_H
