//
// Created by Sebastian on 17/11/2020.
//

#include "Book.h"

//Constructors
Book::Book() {
    title = "Unkown";
    author = "Unkown";
    year = 0;

    std::cout << "\nNo args called!\n";
    displayAttributes();
}

Book::Book(std::string titleVal, std::string authorVal) {
    title = titleVal;
    author = authorVal;
    year = 0;

    std::cout << "\nTwo args called!\n";
    displayAttributes();
}

Book::Book(std::string titleVal, std::string authorVal, int yearVal) {
    title = titleVal;
    author = authorVal;
    year = yearVal;

    std::cout << "\nThree args called!\n";
    displayAttributes();
}

//Destructor
Book::~Book() {
    std::cout << "\nDestructor called!\n";
}

//Functions
void Book::displayAttributes() {
    std::cout << "\nTitle: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "Year: " << year << "\n";
}
