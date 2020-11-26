//
// Created by Sebastian on 24/11/2020.
//

#ifndef PLAYERCLASSINHERITANCE_PLAYER_H
#define PLAYERCLASSINHERITANCE_PLAYER_H

#include <string>

class Player {
protected:
    std::string username;
    int health;
    int damage;
    int *level;
public:
    Player ();
    Player (std::string usernameValue, int healthValue, int damageValue);
    ~Player ();
    //Copy Constructor
    Player (const Player &src);
    //Move Constructor
    Player (Player &&src);
    //Copy Assignment
    Player &operator=(const Player &src);
    void takeDamage (int damage);
    void sendDamage();
    int getDamage();
    void displayData();
};


#endif //PLAYERCLASSINHERITANCE_PLAYER_H
