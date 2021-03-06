//
// Created by Sebastian on 30/11/2020.
//

#ifndef ACCOUNTPOLYMORPHISM_I_PRINTABLE_H
#define ACCOUNTPOLYMORPHISM_I_PRINTABLE_H

#include <iostream>

class I_Printable {
friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};


#endif //ACCOUNTPOLYMORPHISM_I_PRINTABLE_H
