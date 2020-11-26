//
// Created by Sebastian on 26/11/2020.
//

#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, withdrawals{0} {

}

bool Trust_Account::deposit(double amount) {
    if (amount >= def_deposit)
        amount += def_receive;

    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    double percentage{balance * def_percentage};
    if (amount < percentage && withdrawals < 3) {
        withdrawals++;
        return Savings_Account::withdraw(amount);
    }

    return false;


}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << " : " << account.balance << ", " << account.int_rate << "]";
    return os;
}
