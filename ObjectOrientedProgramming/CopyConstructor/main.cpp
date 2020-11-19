#include <iostream>
#include "Phone.h"

//Prototypes
void display (Phone phone);
Phone createIphone ();

int main() {
    Phone android{"Huawei", "Android 6.1", 500.0};

    //Copy (return function)
    Phone iphone{createIphone()};
    iphone.displayData();

    //Copy (same object class)
    Phone myPhone = android;
    myPhone.displayData();

    //Copy (as parameter function)
    display (iphone);


    std::cout << "\n";

    return 0;
}

//Functions
void display (Phone phone) {
    std::cout << "\n";
    std::cout << "\nName: " << phone.getName() << "\n";
    std::cout << "Operative System: " << phone.getOs() << "\n";
    std::cout << "Cost: $" << phone.getCost() << "\n";
    std::cout << "\n";
}

Phone createIphone () {
    Phone phone{"IPhone", "IOS", 1400.0};
    return phone;
}
