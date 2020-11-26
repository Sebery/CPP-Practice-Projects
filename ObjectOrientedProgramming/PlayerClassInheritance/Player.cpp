//
// Created by Sebastian on 24/11/2020.
//

#include "Player.h"
#include <iostream>

Player::Player()
    : username{"Player"}, damage{15}, health{100}, level{nullptr} {
    level = new int;
    *level = 1;
}

Player::Player(std::string usernameValue, int healthValue, int damageValue)
    : username{usernameValue}, health{healthValue}, damage{damageValue}, level{nullptr} {
    level = new int;
    *level = 1;
}

//Copy Constructor
Player::Player(const Player &src)
    : level{nullptr}, username{src.username}, health{src.health}, damage{src.damage} {
    level = new int;
    *level = *src.level;
}

//Move Constructor
Player::Player(Player &&src)
    : level{nullptr}, username{src.username}, health{src.health}, damage{src.damage} {
    level = src.level;
    src.level = nullptr;
}

//Copy Assignment
Player & Player::operator=(const Player &src) {
    if (this == &src)
        return *this;

    username = src.username;
    damage = src.damage;
    health = src.health;
    *level = *src.level;
    std::cout << "\nCopy Assignment!\n";

    return *this;
}

Player::~Player() {
    delete level;
}

void Player::sendDamage() {
    std::cout << "\n" << username << " sends " << damage << " points of damage :(\n";
}

void Player::takeDamage(int damage) {
    std::cout << "\n" << username << " takes " << damage << " points of damage :(\n";
}

int Player::getDamage() {
    return damage;
}

void Player::displayData() {
    std::cout << "\nUsername: " << username << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Damage: " << damage << "\n";
}