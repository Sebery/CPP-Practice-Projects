//
// Created by Sebastian on 29/11/2020.
//

#ifndef SHAPECLASS_POINTERS_H
#define SHAPECLASS_POINTERS_H

#include "Custom.h"

class Pointers : public Custom {
public:
    virtual void draw(double x, double y) override;
    virtual void scale(double x, double y) override;
    virtual ~Pointers () {};
};


#endif //SHAPECLASS_POINTERS_H
