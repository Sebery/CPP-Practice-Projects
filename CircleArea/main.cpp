#include <iostream>

using std::cout, std::cin;

/*
 * Program to calculate the area of a circle.
 *
 * */

int main() {
    const double PI = 3.1416;

    cout << "------------------------------------\n";
    cout << "-- CALCULATE THE AREA OF A CIRCLE --\n";
    cout << "------------------------------------\n";

    cout << "\n";

    cout << "Enter the radius in centimeters: ";
    double radius{};
    cin >> radius;

    cout << "\n";

    double area = PI * (radius * radius);
    cout << "The area of the circle in centimeters is: " << area << "cm\n";
    cout << "The area of the circle in centimeters is: " << area / 100 << "m\n";


    return 0;
}
