//
// Created by Sebastian on 02/12/2020.
//

#include "Book.h"
#include "BadBookException.h"
#include <cstring>

Book::Book(std::string titleValue)
    : title{titleValue} {

    if (title == "Harry Potter" || title == "Crepusculo") {
        char *buffer1 = new char[99];
        std::strcpy(buffer1, "[ERROR] - Bad Books Allocated!");
        throw BadBookException(buffer1); //"[ERROR] - Bad Books Allocated!";
    }


    if (title == "none") {
        char *buffer2 = new char[99];
        std::strcpy(buffer2, "[ERROR] - Cannot find the Book!");
        throw BadBookException(buffer2);
    }

}
