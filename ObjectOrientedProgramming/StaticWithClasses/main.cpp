#include <iostream>
#include "Player.h"

int main() {
    Player goodPlayer{"God"};

    {
        Player myPlayer{"Sebery"};
        Player otherPlayer{"Krispin"};

        std::cout << "\n" << Player::getActivePlayers() << "\n";
        Player::displayCurrentPlayers();
    }

    std::cout << "\n" << Player::getActivePlayers() << "\n";
    Player::displayCurrentPlayers();



    return 0;
}
