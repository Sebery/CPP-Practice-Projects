//
// Created by Sebastian on 18/11/2020.
//

#ifndef DEEPCOPYCONSTRUCTOR_SONG_H
#define DEEPCOPYCONSTRUCTOR_SONG_H

#include <string>

class Song {
private:
    std::string *title;
    double *duration;
public:
    //Getters
    std::string getTitle () { return *title; }
    double getDuration () { return *duration; }
    //Setters
    void setTitle (std::string titleValue) { *title = titleValue; }
    void setDuration (double durationValue) { *duration = durationValue; };
    //Constructor
    Song (std::string titleValue, double durationValue);
    //Deep Copy Constructor
    Song (const Song &src);
    //Destructor
    ~Song ();
};


#endif //DEEPCOPYCONSTRUCTOR_SONG_H
