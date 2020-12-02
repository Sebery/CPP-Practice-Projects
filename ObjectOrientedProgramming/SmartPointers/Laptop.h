//
// Created by Sebastian on 01/12/2020.
//

#ifndef SMARTPOINTERS_LAPTOP_H
#define SMARTPOINTERS_LAPTOP_H

#include "Computer.h"

class Laptop : public Computer {
private:
    int RAM;
public:
    Laptop (int ramValue = 2);
    virtual void print(std::ostream &os) const override;
    virtual ~Laptop() = default;
};


#endif //SMARTPOINTERS_LAPTOP_H
