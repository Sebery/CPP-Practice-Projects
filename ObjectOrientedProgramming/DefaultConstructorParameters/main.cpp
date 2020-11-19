#include <iostream>
#include "Account.h"

int main() {
    //Basic Account object
    Account account1;
    Account account2{"Sebery"};
    Account account3{"Mike", "mike@gmail.com"};

    //Pointer Account object
    Account *account4{nullptr};
    account4 = new Account("John", "john@hotmail.com", "john12345");

    delete account4;

    std::cout << "\n";

    return 0;
}
