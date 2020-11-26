#include <iostream>
#include "Player.h"
#include "Enemy.h"

int main() {
    Player myPlayer;
    Player secondPlayer{"Second", 30, 10};
    Enemy myEnemy;
    Enemy otherEnemy;

    myPlayer.takeDamage(myEnemy.getDamage());
    myPlayer.sendDamage();
    myPlayer.displayData();

    myEnemy.takeDamage(myPlayer.getDamage(), 2);
    myEnemy.sendDamage();
    myEnemy.displayData();

    myPlayer = secondPlayer;

    myPlayer.displayData();

    otherEnemy = Enemy{"Zombie", 34, 89};

    myEnemy = otherEnemy;

    myEnemy.displayData();
    otherEnemy.displayData();


    return 0;
}
