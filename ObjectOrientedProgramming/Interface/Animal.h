//
// Created by Sebastian on 30/11/2020.
//

#ifndef INTERFACE_ANIMAL_H
#define INTERFACE_ANIMAL_H

#include "IPrintable.h"

class Animal : public IPrintable  {
public:
    virtual void print(std::ostream &os) const override;
    virtual ~Animal () {  };
};


#endif //INTERFACE_ANIMAL_H
