//
// Created by Sebastian on 18/11/2020.
//

#include "Account.h"
#include <iostream>

//Constructor
Account::Account(std::string usernameValue, std::string emailValue, std::string passwordValue)
    : username{usernameValue}, email{emailValue}, password{passwordValue} {
    displayData();
}

//Functions
void Account::displayData() {
    std::cout << "\n";
    std::cout << "Username: " << username << "\n";
    std::cout << "Email: " << email << "\n";
    std::cout << "Password: " << password << "\n";
    std::cout << "\n";
}
