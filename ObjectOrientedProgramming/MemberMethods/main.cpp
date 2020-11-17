#include <iostream>
#include "Computer.h"

int main() {
    //Basic Computer object
    Computer myLaptop;

    myLaptop.setProcessor("intel");
    myLaptop.setRam(8.0);
    myLaptop.setType("laptop");

    std::cout << myLaptop.getProcessor() << "\n";
    std::cout << myLaptop.getRam() << "\n";
    std::cout << myLaptop.getType() << "\n";

    myLaptop.validateType("programmer");
    myLaptop.validateRam("blender");

    std::cout << "\n";

    //Pointer Computer Object
    Computer *myPc{nullptr};
    myPc = new Computer();

    myPc->setProcessor("amd");
    myPc->setRam(32);
    myPc->setType("pc");

    std::cout << myPc->getProcessor() << "\n";
    std::cout << myPc->getRam() << "\n";
    std::cout << myPc->getType() << "\n";

    myPc->validateType("student");
    myPc->validateRam("photoshop");

    std::cout << "\n";

    delete myPc;

    return 0;
}
