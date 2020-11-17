//
// Created by Sebastian on 17/11/2020.
//

#include "Player.h"
#include <iostream>

//Constructors
Player::Player()
    : Player{"Unknown", "example@gmail.com", 0} {
    std::cout << "\nNo args called!\n";
}

Player::Player(std::string usernameVal)
    : Player{usernameVal, "example@gmail.com", 0} {
    std::cout << "\nOne arg called!\n";
}

Player::Player(std::string usernameVal, std::string emailVal, int friendsVal)
    : username{usernameVal}, email{emailVal}, friends{friendsVal} {
    std::cout << "\n----------------------------------\n";
    std::cout << "Username: " << username << "\n";
    std::cout << "Email: " << email << "\n";
    std::cout << "Friends: " << friends << "\n";
    std::cout << "----------------------------------\n";
    std::cout << "Three args called!\n";
}
