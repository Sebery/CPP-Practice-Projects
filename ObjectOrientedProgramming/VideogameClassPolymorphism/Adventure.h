//
// Created by Sebastian on 29/11/2020.
//

#ifndef VIDEOGAMECLASSPOLYMORPHISM_ADVENTURE_H
#define VIDEOGAMECLASSPOLYMORPHISM_ADVENTURE_H

#include "Videogame.h"
#include <string>

class Adventure : public Videogame {
public:
    virtual void display () const override;
    virtual void setName (std::string nameValue) override;
    virtual ~Adventure ();
};


#endif //VIDEOGAMECLASSPOLYMORPHISM_ADVENTURE_H
