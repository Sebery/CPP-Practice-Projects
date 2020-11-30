//
// Created by Sebastian on 29/11/2020.
//

#include "Adventure.h"
#include <iostream>

void Adventure::display () const {
    std::cout << "\nAdventure::display ---> Called!\n";
}

Adventure::~Adventure() {
    std::cout << "\nAdventure::Destructor ---> Called!\n";
}

void Adventure::setName(std::string nameValue) {
    name = nameValue;
    std::cout << "\nAdventure::setName ---> Called with " << name << "!\n";
}
