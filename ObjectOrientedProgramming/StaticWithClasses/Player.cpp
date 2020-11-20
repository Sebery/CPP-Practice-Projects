//
// Created by Sebastian on 19/11/2020.
//

#include "Player.h"
#include <iostream>

int Player::activePlayers{0};
std::vector<std::string> Player::playerNames{};

//Constructors
Player::Player(std::string nameValue)
    : name{nameValue} {
    activePlayers++;
    playerNames.push_back(name);
}

Player::Player(const Player &src)
    : Player{src.name} {

}

//Destructor
Player::~Player() {
    for (size_t i{0}; i < playerNames.size(); i++) {
        if (playerNames.at(i) == name) {
            playerNames.erase((playerNames.begin() + i));
            break;
        }
    }

    activePlayers--;
}

//Static functions
int Player::getActivePlayers() {
    return activePlayers;
}

void Player::displayCurrentPlayers() {
    std::cout << "\n";

    for (auto &name : playerNames) {
        std::cout << name << "\n";
    }

    std::cout << "\n";
}