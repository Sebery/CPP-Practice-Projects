#include <iostream>
#include "House.h"

int main() {
    //Basic House object
    House myHouse;
    House friendHouse{3};

    //Pointer House object
    House *bigHouse{nullptr};
    bigHouse = new House(5, 4, 3);

    delete bigHouse;

    return 0;
}
