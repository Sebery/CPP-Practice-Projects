//
// Created by Sebastian on 17/11/2020.
//

#ifndef DELEGATINGCONSTRUCTORS_PLAYER_H
#define DELEGATINGCONSTRUCTORS_PLAYER_H

#include <string>

class Player {
private:
    std::string username;
    std::string email;
    int friends;
public:
    Player();
    Player(std::string usernameVal);
    Player(std::string usernameVal, std::string emailVal, int friendsVal);
};


#endif //DELEGATINGCONSTRUCTORS_PLAYER_H
