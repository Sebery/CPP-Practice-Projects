//
// Created by Sebastian on 02/12/2020.
//

#ifndef EXCEPTIONSWITHCLASSES_BOOK_H
#define EXCEPTIONSWITHCLASSES_BOOK_H

#include <string>

class Book {
private:
    std::string title;
public:
    Book (std::string titleValue = "Unknown");
    ~Book () = default;
};


#endif //EXCEPTIONSWITHCLASSES_BOOK_H
