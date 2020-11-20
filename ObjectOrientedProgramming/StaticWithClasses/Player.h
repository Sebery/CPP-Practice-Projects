//
// Created by Sebastian on 19/11/2020.
//

#ifndef STATICWITHCLASSES_PLAYER_H
#define STATICWITHCLASSES_PLAYER_H

#include <vector>
#include <string>

class Player {
private:
    static int activePlayers;
    static std::vector<std::string> playerNames;

    std::string name;
public:
    //Constructors
    Player (std::string nameValue);
    Player (const Player &src);
    //Destructor
    ~Player ();
    //Static functions
    static int getActivePlayers ();
    static void displayCurrentPlayers ();
};


#endif //STATICWITHCLASSES_PLAYER_H
