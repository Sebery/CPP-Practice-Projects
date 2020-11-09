#include <iostream>

using std::cout, std::cin;

/*
 * Using US dollars and cents
 *
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 *
 * You may assume that the number of cents entered is greater than or equal to zero.
 *
 * The program should then display how to provide that change to the user.
 *
 * In the US:
 * 1 dollar is 100 cents
 * 1 quarter is 25 cents
 * 1 dime is 10 cents
 * 1 nickel is 5 cents
 * 1 penny is 1 cent
 *
 * Sample run:
 *
 * Enter an amount in cents: 92
 *
 * You can provide this change as follows:
 * Dollars: 0
 * Quarters: 3
 * Dimes: 1
 * Nickels: 1
 * Pennies: 2
 *
 * */

int main() {
    //CONSTANTS
    const int dollar{100};
    const int quarter{25};
    const int dime{10};
    const int nickel{5};
    const int penny{1};

    cout << "------------------------------------\n";
    cout << "-- WELCOME TO THE DOLLARS PROGRAM --\n";
    cout << "------------------------------------\n\n";

    cout << "Enter an amount in cents: ";
    int cents{};
    cin >> cents;

    int curr_dollars{};
    curr_dollars = cents / dollar;
    cents %= dollar;

    int curr_quarters{};
    curr_quarters = cents / quarter;
    cents %= quarter;

    int curr_dimes{};
    curr_dimes = cents / dime;
    cents %= dime;

    int curr_nickels{};
    curr_nickels = cents / nickel;
    cents %= nickel;

    int curr_pennies{};
    curr_pennies = cents / penny;
    cents %= penny;

    cout << "\nDollars    : " << curr_dollars;
    cout << "\nQuarters   : " << curr_quarters;
    cout << "\nDimes      : " << curr_dimes;
    cout << "\nNickels    : " << curr_nickels;
    cout << "\nPennies    : " << curr_pennies;




    return 0;
}
