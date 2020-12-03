//
// Created by Sebastian on 02/12/2020.
//

#ifndef EXCEPTIONSWITHCLASSES_BADBOOKEXCEPTION_H
#define EXCEPTIONSWITHCLASSES_BADBOOKEXCEPTION_H

#include <iostream>

class BadBookException : public std::exception {
private:
    char *message;
public:
    BadBookException() = default;
    BadBookException(char *value);
    const char * what() const noexcept override;
    ~BadBookException() = default;
};


#endif //EXCEPTIONSWITHCLASSES_BADBOOKEXCEPTION_H
