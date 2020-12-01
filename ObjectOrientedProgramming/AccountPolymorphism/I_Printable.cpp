//
// Created by Sebastian on 30/11/2020.
//

#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);

    return os;
}

