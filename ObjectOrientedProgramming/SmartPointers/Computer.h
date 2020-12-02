//
// Created by Sebastian on 01/12/2020.
//

#ifndef SMARTPOINTERS_COMPUTER_H
#define SMARTPOINTERS_COMPUTER_H

#include "I_Printable.h"
#include <string>

class Computer : public I_Printable {
protected:
    std::string type;
public:
    Computer (std::string typeValue = "Computer");
    virtual void print(std::ostream &os) const override = 0;
    virtual ~Computer() = default;
};


#endif //SMARTPOINTERS_COMPUTER_H
