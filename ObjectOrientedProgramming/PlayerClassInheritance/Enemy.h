//
// Created by Sebastian on 24/11/2020.
//

#ifndef PLAYERCLASSINHERITANCE_ENEMY_H
#define PLAYERCLASSINHERITANCE_ENEMY_H

#include "Player.h"
#include <string>

class Enemy : public Player {
public:
    Enemy ();
    Enemy (std::string usernameValue, int healthValue, int damageValue);
    //Copy Constructor
    Enemy (const Enemy &src);
    //Move Constructor
    Enemy (Enemy &&src);
    //Copy Assignment
    Enemy &operator=(const Enemy &src);
    ~Enemy ();
    //Functions
    void takeDamage (int damage, int strength = 1);
};


#endif //PLAYERCLASSINHERITANCE_ENEMY_H
