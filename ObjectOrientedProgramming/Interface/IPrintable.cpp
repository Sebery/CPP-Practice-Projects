//
// Created by Sebastian on 30/11/2020.
//

#include "IPrintable.h"

std::ostream &operator<<(std::ostream &os, const IPrintable &obj) {
    obj.print(os);

    return os;
}
