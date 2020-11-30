//
// Created by Sebastian on 29/11/2020.
//

#ifndef SHAPECLASS_SQUARE_H
#define SHAPECLASS_SQUARE_H

#include "Default.h"


class Square : public Default {
    virtual void draw(double x, double y) override;
    virtual void scale(double x, double y) override;
    virtual ~Square () {};
};


#endif //SHAPECLASS_SQUARE_H
