#include <iostream>
#include <iomanip>

int main() {
    double num1{654654754.3463542};
    double num2{454.3453};
    double num3{12.5};

    std::cout << std::uppercase;

    std::cout << "\n================DEFAULTS======================\n";
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    std::cout << "\n================PRECISION(3)======================\n";
    std::cout.precision(3);
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    std::cout << "\n================PRECISION(9) AND SHOWPOINT======================\n";
    std::cout.precision(9);
    std::cout << std::showpoint;
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    std::cout << "\n================PRECISION(3) FIXED======================\n";
    std::cout.precision(3);
    std::cout << std::fixed;
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    std::cout << "\n================PRECISION(9) AND SHOWPOINT AND FIXED======================\n";
    std::cout.precision(9);
    std::cout << std::showpoint;
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    std::cout << std::resetiosflags(std::ios::floatfield);
    std::cout << std::resetiosflags(std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpoint);
    std::cout.precision(6);

    std::cout << "\n================DEFAULTS======================\n";
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";


    return 0;
}
