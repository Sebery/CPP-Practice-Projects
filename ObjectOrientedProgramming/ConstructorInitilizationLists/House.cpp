//
// Created by Sebastian on 17/11/2020.
//

#include "House.h"
#include <iostream>

//Constructors
House::House()
    : rooms{1}, bathrooms{1}, floors{1} {
    displayData();
}

House::House(int roomsVal)
    : rooms{roomsVal}, bathrooms{1}, floors{1} {
    displayData();
}

House::House(int roomsVal, int bathroomsVal, int floorsVal)
    : rooms{roomsVal}, bathrooms{bathroomsVal}, floors{floorsVal} {
    displayData();
}


//Functions
void House::displayData() {
    std::cout << "\n";
    std::cout << "Rooms: " << rooms << "\n";
    std::cout << "Bathrooms: " << bathrooms << "\n";
    std::cout << "Floors: " << floors << "\n";
    std::cout << "\n";
}