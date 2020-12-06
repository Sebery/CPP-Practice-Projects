#include <iostream>
#include "Person.h"
#include <vector>
#include <string>

template <typename T>
void displayAll (const std::vector<Person<T>> &elements);



int main() {
    std::vector<double> grades1{8.6, 10.0, 6.1, 9.2, 7.6};
    Person<double> student{"Jake", grades1};

    student.displayData();

    std::vector<double> grades2{8.2, 10.0, 6.8, 9.3, 7.5};
    Person<double> student2{"Steve", grades2};

    std::cout << "\n==========================================\n";

    student2.displayData();

    std::cout << "\n==========================================\n";

    std::vector<std::string> letters1{"J", "O", "H", "N"};
    Person<std::string> student3{"Jake", letters1};

    std::vector<std::string> letters2{"J", "O", "E", "L"};
    Person<std::string> student4{"Jake", letters2};

    std::vector<Person<double>> students1{student, student2};
    std::vector<Person<std::string>> students2{student3, student4};

    displayAll(students1);
    displayAll(students2);



    return 0;
}



template <typename T>
void displayAll (const std::vector<Person<T>> &elements) {
    for (const auto &f : elements) {
        f.displayData();
    }
}
