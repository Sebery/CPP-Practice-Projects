//
// Created by Sebastian on 14/11/2020.
//

#ifndef MYPLAYERGAME_PLAYER_H
#define MYPLAYERGAME_PLAYER_H

#include <string>
#include<iostream>


class Player {
private:
    int health;
    int level;
    std::string name;

public:
    //Getters
    int getHealth ();
    int getLevel ();
    std::string getName();

    //Setters
    void setHealth (int health_val);
    void setLevel (int level_val);
    void setName (std::string name_val);

    //Constructors
    Player (int health_val, int level_val, std::string name_val);

    //Deconstructor
    ~Player();

    //Functions
    Player *createPlayer ();
    void displayPlayerInfo();
};

#endif //MYPLAYERGAME_PLAYER_H
