#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Account_Utils.h"
#include <vector>
#include "Checking_Account.h"
#include "Trust_Account.h"



int main() {
    std::cout.precision(2);
    std::cout << std::fixed;

    //Accounts
    std::vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    //Savings Accounts
    std::vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    //Checking Accounts
    std::vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Iron Man"});
    check_accounts.push_back(Checking_Account{"Hulk", 1500});
    check_accounts.push_back(Checking_Account{"Spiderman", 8000, 1000});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    //Trust Accounts
    std::vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    deposit(trust_accounts, 5000); //6050
    withdraw(trust_accounts, 2000);



    return 0;
}
