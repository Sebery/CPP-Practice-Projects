//
// Created by Sebastian on 17/11/2020.
//

#ifndef CONSTRUCTORINITILIZATIONLISTS_HOUSE_H
#define CONSTRUCTORINITILIZATIONLISTS_HOUSE_H


class House {
private:
    int rooms;
    int bathrooms;
    int floors;
public:
    //Constructors
    House ();
    House (int roomsVal);
    House (int roomsVal, int bathroomsVal, int floorsVal);

    //Functions
    void displayData ();
};


#endif //CONSTRUCTORINITILIZATIONLISTS_HOUSE_H
