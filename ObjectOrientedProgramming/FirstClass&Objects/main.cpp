#include <iostream>
#include <string>
#include "Videogame.h"

int main() {
    //Simple Videogame Object
    Videogame zelda;
    zelda.name = "Zelda";

    if (zelda.validateCompatibility("Nintendo Switch")) {
        std::cout << zelda.name << " is compatible!\n";
    } else {
        std::cout << zelda.name << " is not compatible!\n";
    }

    //Videogame Pointer
    Videogame *halo{nullptr};
    halo = new Videogame();

    halo->name = "Halo 5";

    if (halo->validateCompatibility("PSP")) {
        std::cout << halo->name << " is compatible!\n";
    } else {
        std::cout << halo->name << " is not compatible!\n";
    }

    delete halo;

    return 0;
}
