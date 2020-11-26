//
// Created by Sebastian on 26/11/2020.
//

#ifndef ACCOUNTCLASSINHERITANCE_CHECKING_ACCOUNT_H
#define ACCOUNTCLASSINHERITANCE_CHECKING_ACCOUNT_H

#include <string>
#include "Account.h"

class Checking_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr double def_fee = 1.50;
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr const double def_balance = 0.0;
protected:
    double fee;
public:
    Checking_Account (std::string name = def_name, double balance = def_balance, double fee = def_fee);
    bool withdraw(double amount);
};


#endif //ACCOUNTCLASSINHERITANCE_CHECKING_ACCOUNT_H
