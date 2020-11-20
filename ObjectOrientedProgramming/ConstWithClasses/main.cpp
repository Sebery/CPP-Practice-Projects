#include <iostream>
#include "Album.h"
#include <vector>

void displayData (const Album &album);

int main() {
    Album socialCues{12, "Broken Boy"};
    displayData(socialCues);

    const Album trench{14, "Jumpsuit"};
    displayData(trench);

    std::vector<Album> albums{};
    albums.push_back(trench);
    displayData(albums.at(0));



    std::cout << "\n";

    return 0;
}

void displayData (const Album &album) {
    std::cout << "\nSongs: " << album.getSongs() << "\n";
    std::cout << "\nSongs: " << album.getFirstSong() << "\n\n";
}

