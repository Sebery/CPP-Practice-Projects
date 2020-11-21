//
// Created by Sebastian on 20/11/2020.
//

#include "Movie.h"

Movie::Movie(std::string titleValue, double durationValue)
    : title{titleValue}, duration{durationValue} {

}

Movie::Movie(const Movie &movie)
    : Movie{movie.title, movie.duration} {

}
