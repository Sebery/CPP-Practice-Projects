#include <iostream>
#include "Movies.h"

//Prototypes
void displayMenu ();
char getSelection ();
void menuActions (const char &selection, Movies &movies);



int main() {
    Movies myMovies;
    char selection;

    do {
        displayMenu();
        selection = getSelection();
        menuActions(selection, myMovies);
    } while (selection != 'Q');

    return 0;
}

//Functions
void displayMenu () {
    std::cout << "\n------------------------------------------\n";
    std::cout << "Add Movie to your collection  ---> Enter A\n";
    std::cout << "Increment a watched count     ---> Enter I\n";
    std::cout << "Display your movies           ---> Enter D\n";
    std::cout << "Quit                          ---> Enter Q\n";
    std::cout << "------------------------------------------\n";
}

char getSelection () {
    char selection;
    std::cout << "---> ";
    std::cin >> selection;

    return toupper(selection);
}

void menuActions (const char &selection, Movies &movies) {
    switch (selection) {
        case 'A':
            movies.addMovie();
            break;
        case 'I':
            movies.incrementWatchedCount();
            break;
        case 'D':
            movies.displayMovies();
            break;
        case 'Q':
            std::cout << "Quit\n";
            break;
        default:
            std::cout << "\nInvalid option, try again!\n";
            break;
    }
}


//~