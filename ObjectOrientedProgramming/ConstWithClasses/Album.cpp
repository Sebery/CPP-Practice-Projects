//
// Created by Sebastian on 19/11/2020.
//

#include "Album.h"
#include <iostream>

//Constructors
Album::Album(int songsValue, std::string firstSongValue)
    : songs{songsValue}, firstSong{firstSongValue} {
}

Album::Album(const Album &album)
    : Album{album.songs, album.firstSong} {
    std::cout << "\nCopy constructor: " << firstSong << "\n";
}

//Getters
int Album::getSongs() const {
    return songs;
}

std::string Album::getFirstSong() const {
    return firstSong;
}

