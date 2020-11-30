//
// Created by Sebastian on 30/11/2020.
//

#ifndef INTERFACE_COW_H
#define INTERFACE_COW_H

#include "Animal.h"

class Cow : public Animal{
public:
    void print(std::ostream &os) const override;
    virtual ~Cow () {  };
};


#endif //INTERFACE_COW_H
