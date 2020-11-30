//
// Created by Sebastian on 29/11/2020.
//

#ifndef SHAPECLASS_SHAPE_H
#define SHAPECLASS_SHAPE_H


class Shape {
public:
    virtual void draw(double x, double y) = 0;
    virtual void scale(double x, double y) = 0;
    virtual ~Shape () {};
};


#endif //SHAPECLASS_SHAPE_H
