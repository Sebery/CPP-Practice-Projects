//
// Created by Sebastian on 15/11/2020.
//

#include "Movies.h"
#include <iostream>

//Constructors
Movies::Movies () {};
Movies::Movies (const Movies &movies) : Movies() {};

//Destructor
Movies::~Movies () {};

//Functions
void Movies::addMovie() {
    std::cin.clear();
    std::cin.ignore();

    std::string name;
    std::string rating;
    int watchedCount;

    validateName(name);

    validateRating(rating);

    std::cout << "Enter the watched count: ";
    std::cin >> watchedCount;

    moviesCollection.push_back(Movie{name, rating, watchedCount});
}

void Movies::validateName(std::string &name) {
    bool isValid{false};

    do {
        std::cout << "\nEnter the name: ";
        std::getline(std::cin, name);

        for (auto &c : name) {
            c = toupper(c);
        }

        for (auto const &movie : moviesCollection) {
            if (movie.getName() == name) {
                isValid = false;
                std::cout << "\nThis movie is already in the collection!\n";
                break;
            } else {
                isValid = true;
            }
        }

        if (moviesCollection.size() == 0) isValid = true;
    } while (!isValid);
}

void Movies::validateRating(std::string &rating) {
    bool isValid{false};

    do {
        std::cout << "\nEnter the rating ---> ( G, PG, PG-13, R ): ";
        std::getline(std::cin, rating);

        for (auto &c : rating) {
            c = toupper(c);
        }

        if (rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R") {
            isValid = true;
        } else {
            std::cout << "\nInvalid rating, please try again!\n";
        }
    } while (!isValid);

}

void Movies::displayMovies () {
    for (auto const &movie : moviesCollection) {
        std::cout << "\n================================================\n";
        std::cout << "Name: " << movie.getName() << "\n";
        std::cout << "Watched: " << movie.getWatched() << "\n";
        std::cout << "Rating: " << movie.getRating() << "\n";
        std::cout << "================================================\n";
    }

    if (moviesCollection.size() == 0) std::cout << "\nYour collection of movies is empty!\n";
}

void Movies::incrementWatchedCount() {
    std::cin.clear();
    std::cin.ignore();

    std::string movieName;
    bool isValid{false};

    std::cout << "\nEnter the movie name: ";
    std::getline(std::cin, movieName);

    for (auto &c : movieName) {
        c = toupper(c);
    }

    for (auto &movie : moviesCollection) {
        if (movie.getName() == movieName) {
            movie.setWatched(movie.getWatched() + 1);
            isValid = true;
        }
    }

    if (!isValid) std::cout << "\nThe movie is not in the collection!\n";
}