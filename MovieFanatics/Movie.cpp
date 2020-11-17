//
// Created by Sebastian on 15/11/2020.
//

#include "Movie.h"

//Construtors
Movie::Movie (std::string nameVal, std::string ratingVal, int watchedVal)
    : name{nameVal}, rating{ratingVal}, watched{watchedVal} { }

Movie::Movie (const Movie &movie)
    : Movie(movie.name, movie.rating, movie.watched) { }

//Destructor
Movie::~Movie () {}

//Getters
std::string Movie::getName () const { return name; }
int Movie::getWatched() const { return watched; }
std::string Movie::getRating() const { return rating; }

//Setters
void Movie::setWatched (int watched_val) {
    watched = watched_val;
}

