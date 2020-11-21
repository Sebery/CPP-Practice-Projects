//
// Created by Sebastian on 20/11/2020.
//

#include "Modifier.h"
#include "Movie.h"

#include <iostream>

void Modifier::displayData(Movie &movie) {
    std::cout << "Title: " << movie.title << "\n";
    std::cout << "Duration: " << movie.duration << " hours\n";
}