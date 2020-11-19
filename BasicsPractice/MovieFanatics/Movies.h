//
// Created by Sebastian on 15/11/2020.
//

#ifndef MOVIEFANATICS_MOVIES_H
#define MOVIEFANATICS_MOVIES_H

#include "Movie.h"
#include <vector>


class Movies {
private:
    std::vector<Movie> moviesCollection;
    void validateRating(std::string &rating);
    void validateName(std::string &name);
public:
    //Constructors
    Movies ();
    Movies (const Movies &movies);
    //Destructor
    ~Movies();
    //Functions
    void addMovie();
    void displayMovies();
    void incrementWatchedCount();
};


#endif //MOVIEFANATICS_MOVIES_H
