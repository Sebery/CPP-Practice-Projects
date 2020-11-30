//
// Created by Sebastian on 29/11/2020.
//

#include "Survival.h"
#include <iostream>

void Survival::display () const {
    std::cout << "\nSurvival::display ---> Called!\n";
}

Survival::~Survival() {
    std::cout << "\nSurvival::destructor ---> Called!\n";
}

void Survival::setName(std::string nameValue) {
    name = nameValue;
    std::cout << "\nSurvival::setName ---> Called with " << name << "!\n";
}