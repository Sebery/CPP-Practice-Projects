//
// Created by Sebastian on 18/11/2020.
//

#include "Song.h"
#include <iostream>

//Constructor
Song::Song(std::string titleValue, double durationValue) {
    title = new std::string;
    *title = titleValue;
    duration = new double;
    *duration = durationValue;

    std::cout << "\nMain constructor called: " << *title << "\n";
}

//Deep Copy Constructor
Song::Song(const Song &src)
    : Song{*src.title, *src.duration} {
    std::cout << "\nCopy Constructor called: " << *src.title << "\n";
}

//Destructor
Song::~Song() {
    std::cout << "\nDestructor called: " << *title << "\n";
    delete title;
    delete duration;
}