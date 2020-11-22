#include <iostream>
#include "MyArray.h"
#include <vector>
#include <string>

int main() {
    MyArray names;
    std::vector<std::string> school{"Mike", "John", "Steve"};
    std::vector<std::string> bestGames{"Minecraft", "The Evil Within", "Fortnite"};
    MyArray games{bestGames};

    names = school;

    names.displayData();

    games.displayData();

    names = games;
    names.displayData();

    MyArray allNames{};
    allNames = games + names;

    allNames.displayData();




    return 0;
}
