#include <iostream>
#include "Player.h"

int main() {
    //Basic Player object
    Player myPlayer;
    Player customPlayer{"Custom Player"};

    //Pointer Player Object
    Player *badPlayer{nullptr};
    badPlayer = new Player("Bad Player", "badplayer@gmail.com", 355);

    delete badPlayer;

    std::cout << "\n";

    return 0;
}
