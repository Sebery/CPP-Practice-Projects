//
// Created by Sebastian on 30/11/2020.
//

#ifndef INTERFACE_PIG_H
#define INTERFACE_PIG_H

#include "Animal.h"

class Pig : public Animal {
public:
    void print(std::ostream &os) const override;
    virtual ~Pig () {  };
};


#endif //INTERFACE_PIG_H
