#include <iostream>
#include "Book.h"

int main() {
    //Basic Book object
    Book favoriteBook;
    Book badBook{"Harry Potter", "Bill Johnson", 2003};

    //Pointer Book object
    Book *firstBook{nullptr};
    firstBook = new Book("Crepusculo", "Jean Kennedy", 2011);

    delete firstBook;

    std::cout << "\nProgram Finished!\n";

    return 0;
}
