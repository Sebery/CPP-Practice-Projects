#include <iostream>
#include "Account.h"
#include <vector>
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"


//~

int main() {

    std::cout.precision(2);
    std::cout << std::fixed;

    Account *a = new Checking_Account();
    Account *b = new Checking_Account("Spock", 2000);

    Account *c = new Savings_Account("Superman");
    Account *d = new Savings_Account("Wonderwoman", 5000, 5.0);

    Account *e = new Trust_Account("Athos", 10000, 5.0);
    Account *f = new Trust_Account("Aramis", 30000);


    std::vector<Account *> accounts{a, b, c, d, e, f};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);


    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;



    return 0;
}
