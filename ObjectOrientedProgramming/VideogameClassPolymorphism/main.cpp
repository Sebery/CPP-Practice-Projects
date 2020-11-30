#include <iostream>
#include "Videogame.h"
#include "Adventure.h"
#include "Survival.h"
#include <vector>
#include <string>

void doSetName (Videogame &game, std::string value);

int main() {
    /* WITH POINTERS */
    /*
    Videogame *videogame = new Videogame();
    Videogame *adventure = new Adventure();
    Videogame *survival = new Survival();

    std::vector<Videogame *> games{videogame, adventure, survival};

    for (const auto &p : games) {
        p->display();
    }

    delete videogame;
    delete adventure;
    delete survival; */

    /* WITH REFERENCES */
    Videogame deadSpace;
    Adventure darksiders;
    Survival minecraft;

    doSetName(deadSpace, "Dead Space");
    doSetName(darksiders, "Darksiders");
    doSetName(minecraft, "Minecraft");



    return 0;
}

void doSetName (Videogame &game, std::string value) {
    game.setName(value);
}
