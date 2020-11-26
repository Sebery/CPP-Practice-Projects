//
// Created by Sebastian on 26/11/2020.
//

#ifndef ACCOUNTCLASSINHERITANCE_ACCOUNT_H
#define ACCOUNTCLASSINHERITANCE_ACCOUNT_H

#include <iostream>
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account (std::string name = def_name, double balance = def_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
    bool operator+=(double amount);
};


#endif //ACCOUNTCLASSINHERITANCE_ACCOUNT_H
