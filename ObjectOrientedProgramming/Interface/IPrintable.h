//
// Created by Sebastian on 30/11/2020.
//

#ifndef INTERFACE_IPRINTABLE_H
#define INTERFACE_IPRINTABLE_H

#include <iostream>

class IPrintable {
friend std::ostream &operator<<(std::ostream &os, const IPrintable &obj);
public:
    virtual void print (std::ostream &os) const = 0;
};


#endif //INTERFACE_IPRINTABLE_H
