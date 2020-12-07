#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> students{"Jake", "Juliet", "Romeo", "Sebery"};

    std::for_each(students.begin(), students.end(), [] (std::string &n) {
        for (auto &c : n)
            c = ::toupper(c);
    });

    std::for_each(students.begin(), students.end(), [] (std::string n) {
        std::cout << n << "\n";
    });

    std::vector<double> grades{90.3, 78.9, 67.4, 93.2};

    auto pass = std::count_if(grades.begin(), grades.end(), [] (double x) {
        return (x >= 70.0);
    });

    std::cout << "\nThere are " << pass << " students who passed the exam\n";

    std::for_each(grades.begin(), grades.end(), [] (double &x) {
        if (x < 70.0)
            x = 70.0;
    });

    pass = std::count_if(grades.begin(), grades.end(), [] (double x) {
        return (x >= 70.0);
    });

    std::cout << "\nThere are " << pass << " students who passed the exam\n";

    std::string message{"Hesso Worsd!"};
    std::cout << "\n" << message << "\n";
    std::replace(message.begin(), message.end(), 's', 'l');
    std::cout << "\n" << message << "\n";


    return 0;
}
