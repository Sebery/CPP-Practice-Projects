//
// Created by Sebastian on 14/11/2020.
//

#include "Player.h"
#include <iostream>

//Getters
int Player::getHealth () { return health; }
int Player::getLevel () { return level; }
std::string Player::getName() { return name; }

//Setters
void Player::setHealth (int health_val) { health = health_val; }
void Player::setLevel (int level_val) { level = level_val; }
void Player::setName (std::string name_val) { name = name_val; }

//Constructors
Player::Player (int health_val, int level_val, std::string name_val) {
    health = health_val;
    level = level_val;
    name = name_val;

    std::cout << "\nThe Player " << name << " has been created!\n";
}

//Deconstructor
Player::~Player() {
    std::cout << "\nThe Player " << name << " has died!\n";
}

//Functions
Player *Player::createPlayer() {
    std::string name;
    std::cout << "Please, create a Player!\n";
    std::cout << "Enter your name: ";
    std::cin >> name;
    Player *tempPlayer{new Player(100, 1, name)};
    return tempPlayer;
}

void Player::displayPlayerInfo() {
    std::cout << "\nPlayer Info\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Level: " << level << "\n";
}

