//
// Created by Sebastian on 17/11/2020.
//

#ifndef CONSTRUCTORS_DESTRUCTORS_BOOK_H
#define CONSTRUCTORS_DESTRUCTORS_BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    int year;
public:
    //Constructors
    Book ();
    Book (std::string titleVal, std::string authorVal);
    Book (std::string titleVal, std::string authorVal, int yearVal);

    //Destructor
    ~Book ();

    //Functions
    void displayAttributes ();
};


#endif //CONSTRUCTORS_DESTRUCTORS_BOOK_H
