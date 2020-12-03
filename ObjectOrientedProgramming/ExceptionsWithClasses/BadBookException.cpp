//
// Created by Sebastian on 02/12/2020.
//

#include "BadBookException.h"
#include <cstring>

BadBookException::BadBookException(char *value)
    : message{nullptr} {
    message = value;
    value = nullptr;
}

const char * BadBookException::what() const noexcept {
    return message;
}


