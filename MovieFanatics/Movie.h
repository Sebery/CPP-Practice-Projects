//
// Created by Sebastian on 15/11/2020.
//

#ifndef MOVIEFANATICS_MOVIE_H
#define MOVIEFANATICS_MOVIE_H

#include <string>


class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    //Getters
    std::string getName () const;
    std::string getRating () const;
    int getWatched () const;
    //Setters
    void setWatched(int watched_val);
    //Constructors
    Movie (std::string nameVal, std::string ratingVal, int watchedVal);
    Movie (const Movie &movie);
    //Destructor
    ~Movie ();
};


#endif //MOVIEFANATICS_MOVIE_H
