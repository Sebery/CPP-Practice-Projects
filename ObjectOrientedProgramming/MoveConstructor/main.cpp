#include <iostream>
#include "Subject.h"
#include <vector>

int main() {
    Subject math{"Mathematics", 93.5};
    math.displayValues();

    std::vector<Subject> subjects{};
    subjects.push_back(Subject{"Physics", 89.6});

    subjects.at(0).displayValues();



    return 0;
}
