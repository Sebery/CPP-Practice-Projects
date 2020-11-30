#include <iostream>
#include "Animal.h"
#include "Pig.h"
#include "Cow.h"
#include <vector>


int main() {

    Animal *myPig = new Pig();
    Animal *myAnimal = new Animal();
    Animal *myCow = new Cow();

    std::vector<Animal *> animals{myPig, myAnimal, myCow};

    for (const auto &a : animals) {
        std::cout << *a;
    }

    delete myPig;
    delete myAnimal;
    delete myCow;

    return 0;
}
