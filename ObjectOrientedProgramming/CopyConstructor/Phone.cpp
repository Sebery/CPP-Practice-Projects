//
// Created by Sebastian on 18/11/2020.
//

#include "Phone.h"
#include <iostream>

//Constructor
Phone::Phone(std::string nameValue, std::string osValue, double costValue)
    : name{nameValue}, os{osValue}, cost{costValue} {
    std::cout << "\nMain constructor called for: " << name << "\n";
}

//Copy Constructor
Phone::Phone(const Phone &src)
    : Phone{src.name, src.os, src.cost} {
    std::cout << "\nCopy constructor called for: " << name << "\n";
}

//Destructor
Phone::~Phone() {
    std::cout << "\nDestructor called for: " << name << "\n";
}

//Functions
void Phone::displayData() {
    std::cout << "\n";
    std::cout << "\nName: " << name << "\n";
    std::cout << "Operative System: " << os << "\n";
    std::cout << "Cost: $" << cost << "\n";
    std::cout << "\n";
}