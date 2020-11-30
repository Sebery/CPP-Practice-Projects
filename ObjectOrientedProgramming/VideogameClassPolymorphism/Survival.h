//
// Created by Sebastian on 29/11/2020.
//

#ifndef VIDEOGAMECLASSPOLYMORPHISM_SURVIVAL_H
#define VIDEOGAMECLASSPOLYMORPHISM_SURVIVAL_H

#include "Videogame.h"
#include <string>

class Survival : public Videogame {
public:
    virtual void display () const override;
    virtual void setName (std::string nameValue) override;
    virtual ~Survival ();
};


#endif //VIDEOGAMECLASSPOLYMORPHISM_SURVIVAL_H
