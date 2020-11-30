//
// Created by Sebastian on 29/11/2020.
//

#ifndef VIDEOGAMECLASSPOLYMORPHISM_VIDEOGAME_H
#define VIDEOGAMECLASSPOLYMORPHISM_VIDEOGAME_H

#include <string>

class Videogame {
protected:
    std::string name;
public:
    virtual void display () const;
    virtual void setName (std::string nameValue);
    virtual ~Videogame ();
};


#endif //VIDEOGAMECLASSPOLYMORPHISM_VIDEOGAME_H
