//
// Created by Sebastian on 29/11/2020.
//

#include "Square.h"
#include <iostream>

void Square::draw(double x, double y) {
    std::cout << "\nDrawing a Square --> X" << "[" << x << "]" << " Y[" << y << "]\n";
}

void Square::scale(double x, double y) {
    std::cout << "\nScaling a Square --> X" << "[" << x << "]" << " Y[" << y << "]\n";
}
