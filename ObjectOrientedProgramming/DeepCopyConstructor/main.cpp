#include <iostream>
#include "Song.h"

//Prototypes
void displayData (Song song);

int main() {
    Song mySong{"Broken Boy", 3.24};
    displayData(mySong);
    mySong.setTitle("Chlorine");
    mySong.setDuration(4.12);
    displayData(mySong);

    Song otherSong{mySong};
    otherSong.setDuration(5.12);
    displayData(otherSong);

    std::cout << "\n";

    return 0;
}

void displayData (Song song) {
    std::cout << "\nTitle: " << song.getTitle() << "\n";
    std::cout << "Duration: " << song.getDuration() << "\n\n";
}
