//
// Created by Sebastian on 26/11/2020.
//

#include "Account_Utils.h"
#include <iostream>


//Utility Helper Functions for Account Class

void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts =========================================================\n";
    for (const auto &acc : accounts)
        std::cout << acc << "\n";
}

void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts ===========================================\n";
    for (auto &acc : accounts) {
        if (acc += amount) { //acc.deposit(amount)
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        } else {
            std::cout << "Failed Deposit of " << amount << " to " << acc << "\n";
        }
    }
}

void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ========================================\n";
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << "\n";
        } else {
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << "\n";
        }
    }
}


//Utility Helper Functions for Savings_Account Class
void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts ==================================================\n";
    for (const auto &acc : accounts)
        std::cout << acc << "\n";
}

void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ====================================\n";
    for (auto &acc : accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        } else {
            std::cout << "Failed Deposit of " << amount << " to " << acc << "\n";
        }
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts =================================\n";
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << "\n";
        } else {
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << "\n";
        }
    }
}

//Utility Helper Functions for Checking_Account Class
void display(const std::vector<Checking_Account> &accounts) {
    std::cout << "\n=== Checking Accounts ==================================================\n";
    for (const auto &acc : accounts)
        std::cout << acc << "\n";
}

void deposit(std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Checking Accounts ====================================\n";
    for (auto &acc : accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        } else {
            std::cout << "Failed Deposit of " << amount << " to " << acc << "\n";
        }
    }
}

void withdraw(std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Checking Accounts =================================\n";
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << "\n";
        } else {
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << "\n";
        }
    }
}

//Utility Helper Functions for Trust_Account Class
void display(const std::vector<Trust_Account> &accounts) {
    std::cout << "\n=== Trust Accounts ==================================================\n";
    for (const auto &acc : accounts)
        std::cout << acc << "\n";
}

void deposit(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Trust Accounts ====================================\n";
    for (auto &acc : accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        } else {
            std::cout << "Failed Deposit of " << amount << " to " << acc << "\n";
        }
    }
}

void withdraw(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust Accounts =================================\n";
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << "\n";
        } else {
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << "\n";
        }
    }
}





















