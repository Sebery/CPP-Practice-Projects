//
// Created by Sebastian on 30/11/2020.
//

#ifndef ACCOUNTPOLYMORPHISM_CHECKING_ACCOUNT_H
#define ACCOUNTPOLYMORPHISM_CHECKING_ACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double);
    // Inherits the Account::deposit method
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Checking_Account() {};
};


#endif //ACCOUNTPOLYMORPHISM_CHECKING_ACCOUNT_H
