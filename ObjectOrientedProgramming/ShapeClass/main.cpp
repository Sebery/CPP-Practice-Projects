#include <iostream>
#include "Shape.h"
#include "Square.h"
#include <vector>
#include "Pointers.h"

/*
 * Abstract and Concrete Classes
 *
 *      -Shape (Abstract)
 * -Default (Abstract)  -Custom (Abstract)
 *  -Square (Concrete)   -Pointers (Concrete)
 * */

void drawShapes (std::vector<Shape *> shapes, double x, double y);
void scaleShapes (std::vector<Shape *> shapes, double x, double y);


int main() {
    Shape *square1 = new Square();
    Shape *square2 = new Square();
    Shape *square3 = new Square();
    Shape *point1 = new Pointers();
    Shape *point2 = new Pointers();
    Shape *point3 = new Pointers();

    std::vector<Shape *> shapes{square1, square2, square3, point1, point2, point3};

    drawShapes(shapes, 0.4, 3.2);
    scaleShapes(shapes, 1.5, 1.0);


    delete square1;
    delete square2;
    delete square3;
    delete point1;
    delete point2;
    delete point3;



    return 0;
}

void drawShapes (std::vector<Shape *> shapes, double x, double y) {
    for (auto &s : shapes)
        s->draw(x, y);
}

void scaleShapes (std::vector<Shape *> shapes, double x, double y) {
    for (auto &s : shapes)
        s->scale(x, y);
}

