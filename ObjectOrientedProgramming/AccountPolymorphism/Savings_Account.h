//
// Created by Sebastian on 30/11/2020.
//

#ifndef ACCOUNTPOLYMORPHISM_SAVINGS_ACCOUNT_H
#define ACCOUNTPOLYMORPHISM_SAVINGS_ACCOUNT_H

#include "Account.h"

class Savings_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    // Inherits the Account::withdraw method
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Savings_Account() {};
};


#endif //ACCOUNTPOLYMORPHISM_SAVINGS_ACCOUNT_H
