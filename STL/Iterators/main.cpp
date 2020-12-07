#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>


template <typename T>
void loop(const std::vector<T> &elements);

template <typename T>
void reverseLoop (const std::vector<T> &elements);

template <typename T, typename P>
void fill (std::vector<T> &elements, P content);

template <typename T>
void loopMap (const T &element);

template <typename T>
void reverseLoopMap (const T &elements);

template <typename T, typename P>
void fillMap (T &elements, P content);



int main() {
    std::vector<int> grades{90, 63, 70, 89, 55};
    std::vector<std::string> names{"Jake", "John", "Steve", "Sebery", "Juliet"};
    std::map<std::string, int> students {
            {"Jake", 70},
            {"Sebery", 100},
            {"Juliet", 89},
            {"Steve", 71},
    };


    loop(names);
    reverseLoop(names);
    fill(names, "-_-");
    loop(names);

    loop(grades);
    reverseLoop(grades);
    fill(grades, 0);
    loop(grades);

    loopMap(students);
    reverseLoopMap(students);
    fillMap(students, 101);
    loopMap(students);


    return 0;
}




template <typename T>
void loop(const std::vector<T> &elements) {
    std::cout << "\n==================================\n";

    auto it{elements.begin()};

    while (it != elements.end()) {
        std::cout << *it << "\n";
        it++;
    }

    std::cout << "==================================\n";
}

template <typename T>
void loopMap (const T &elements) {
    std::cout << "\n==================================\n";

    auto it{elements.begin()};

    while (it != elements.end()) {
        std::cout << std::setw(10) << std::left << it->first << " : ";
        std::cout << std::setw(6) << std::right << it->second << "\n";
        it++;
    }

    std::cout << "==================================\n";
}

template <typename T>
void reverseLoop (const std::vector<T> &elements) {
    std::cout << "\n==================================\n";

    auto it{elements.rbegin()};

    while (it != elements.rend()) {
        std::cout << *it << "\n";
        it++;
    }

    std::cout << "==================================\n";
}

template <typename T>
void reverseLoopMap (const T &elements) {
    std::cout << "\n==================================\n";

    auto it{elements.rbegin()};

    while (it != elements.rend()) {
        std::cout << std::setw(10) << std::left << it->first << " : ";
        std::cout << std::setw(6) << std::right << it->second << "\n";
        it++;
    }

    std::cout << "==================================\n";
}

template <typename T, typename P>
void fill (std::vector<T> &elements, P content) {
    auto it{elements.begin()};

    while (it != elements.end()) {
        *it = content;
        it++;
    }
}

template <typename T, typename P>
void fillMap (T &elements, P content) {
    auto it{elements.begin()};

    while (it != elements.end()) {
        it->second = content;
        it++;
    }
}


