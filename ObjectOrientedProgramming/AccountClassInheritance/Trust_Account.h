//
// Created by Sebastian on 26/11/2020.
//

#ifndef ACCOUNTCLASSINHERITANCE_TRUST_ACCOUNT_H
#define ACCOUNTCLASSINHERITANCE_TRUST_ACCOUNT_H

#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
    static constexpr const double def_deposit = 5000.0;
    static constexpr const double def_receive = 50.0;
    static constexpr const double def_percentage = 0.2;
    size_t withdrawals;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};


#endif //ACCOUNTCLASSINHERITANCE_TRUST_ACCOUNT_H
