//
// Created by Sebastian on 01/12/2020.
//

#ifndef SMARTPOINTERS_I_PRINTABLE_H
#define SMARTPOINTERS_I_PRINTABLE_H

#include <iostream>

class I_Printable {
friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};


#endif //SMARTPOINTERS_I_PRINTABLE_H
