//
// Created by Sebastian on 01/12/2020.
//

#include "Laptop.h"

Laptop::Laptop(int ramValue)
 : Computer("Laptop"), RAM{ramValue} {

}

void Laptop::print(std::ostream &os) const {
    os << "\n[Type: Laptop, Ram: " << RAM << "]\n";
}
