//
// Created by Sebastian on 18/11/2020.
//

#ifndef DEFAULTCONSTRUCTORPARAMETERS_ACCOUNT_H
#define DEFAULTCONSTRUCTORPARAMETERS_ACCOUNT_H

#include <string>

class Account {
private:
    std::string username;
    std::string email;
    std::string password;
    void displayData();

public:
    Account (std::string usernameValue = "Guess", std::string emailValue = "-", std::string passwordValue = "-");
};


#endif //DEFAULTCONSTRUCTORPARAMETERS_ACCOUNT_H
