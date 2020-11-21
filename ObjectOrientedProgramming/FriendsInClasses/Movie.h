//
// Created by Sebastian on 20/11/2020.
//

#ifndef FRIENDSINCLASSES_MOVIE_H
#define FRIENDSINCLASSES_MOVIE_H

#include <string>
#include "Modifier.h"

class Movie {
private:
    std::string title;
    double duration;
    friend void Modifier::displayData(Movie &movie);
public:
    Movie (std::string titleValue, double durationValue);
    Movie (const Movie &movie);
};




#endif //FRIENDSINCLASSES_MOVIE_H
