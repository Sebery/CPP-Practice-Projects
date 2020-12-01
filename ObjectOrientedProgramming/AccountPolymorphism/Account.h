//
// Created by Sebastian on 30/11/2020.
//

#ifndef ACCOUNTPOLYMORPHISM_ACCOUNT_H
#define ACCOUNTPOLYMORPHISM_ACCOUNT_H


#include <iostream>
#include <string>
#include "I_Printable.h"

class Account :public I_Printable {
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream &os) const override = 0;
    virtual ~Account () = default;
};


#endif //ACCOUNTPOLYMORPHISM_ACCOUNT_H
