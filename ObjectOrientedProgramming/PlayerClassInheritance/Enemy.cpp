//
// Created by Sebastian on 24/11/2020.
//

#include "Enemy.h"

Enemy::Enemy()
    : Player{"Enemy", 100, 25} {

}

Enemy::Enemy(std::string usernameValue, int healthValue, int damageValue)
    : Player{usernameValue, healthValue, damageValue} {

}

//Copy Constructor
Enemy::Enemy(const Enemy &src)
    : Player{src} {

}

//Move Constructor
Enemy::Enemy(Enemy &&src)
    : Player{src} {

}

//Copy Assignment
Enemy & Enemy::operator=(const Enemy &src) {
    if (this == &src)
        return *this;

    Player::operator=(src);
    return *this;
}

Enemy::~Enemy() {

}

//Functions
void Enemy::takeDamage(int damage, int strength) {
    damage *= strength;
    Player::takeDamage(damage);
}
