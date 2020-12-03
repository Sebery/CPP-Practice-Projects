#include <iostream>
#include "Book.h"
#include "BadBookException.h"

int main() {
    try {
        Book myBook{"none"};
    }
    catch (const BadBookException &ex) {
        std::cout << "\n" << ex.what() << "\n";
    }

    try {
        Book myBook{"Harry Potter"};
    }
    catch (const BadBookException &ex) {
        std::cout << "\n" << ex.what() << "\n";
    }




    return 0;
}
