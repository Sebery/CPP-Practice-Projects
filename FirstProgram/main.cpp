#include <iostream>

using std::cout, std::cin;

/*
 * Create a c++ program that asks the user for their favorite number between 1 and 100
 * then read this number from the console.
 *
 * Suppose the user enters 24
 *
 * Then display the following to the console:
 *
 * Amazing!! That's my favorite number too!
 * No really!!, 24 is my favorite number!
 *
 * Below are two sample runs of the program:
 * -----------------------------------------
 * Enter your favorite number between 1 and 100: 24
 * Amazing!! That's my favorite number too!
 * No really!!, 24 is my favorite number!
 *
 * Enter your favorite number between 1 and 100: 75
 * Amazing!! That's my favorite number too!
 * No really!!, 75 is my favorite number!
 *
 * */

int main() {

    int favorite_number{};

    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;

    cout << "Amazing!! That's my favorite number too!\n";
    cout << "No really!!, " << favorite_number << " is my favorite number!\n";

    return 0;
}
