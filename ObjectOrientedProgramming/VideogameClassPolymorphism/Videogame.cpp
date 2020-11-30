//
// Created by Sebastian on 29/11/2020.
//

#include "Videogame.h"
#include <iostream>

void Videogame::display () const {
    std::cout << "\nVideogame::display ---> Called!\n";
}

Videogame::~Videogame() {
    std::cout << "\nVideogame::destructor ---> Called!\n";
}

void Videogame::setName(std::string nameValue) {
    name = nameValue;
    std::cout << "\nVideogame::setName ---> Called with " << name << "!\n";
}


