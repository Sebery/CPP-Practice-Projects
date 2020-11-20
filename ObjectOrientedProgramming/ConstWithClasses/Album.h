//
// Created by Sebastian on 19/11/2020.
//

#ifndef CONSTWITHCLASSES_ALBUM_H
#define CONSTWITHCLASSES_ALBUM_H

#include <string>

class Album {
private:
    int songs;
    std::string firstSong;
public:
    //Getters
    int getSongs () const;
    std::string getFirstSong () const;
    //Constructors
    Album (int songsValue, std::string firstSongValue);
    Album (const Album &album);
};


#endif //CONSTWITHCLASSES_ALBUM_H
