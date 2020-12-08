#include <iostream>
#include <deque>
#include <array>
#include <algorithm>

void display (const std::deque<int> &elements);

int main() {
    std::deque<int> numbers{0, 0, 0};
    std::array<int, 10> others{4, 5, 1, 9, 10, 43, 5, 3, 4, 12};

    for (const auto &c : others) {
        if (c >= 5)
            numbers.push_back(c);
        else
            numbers.push_front(c);
    }

    display(numbers);

    std::sort(numbers.begin(), numbers.end());

    display(numbers);


    return 0;
}

void display (const std::deque<int> &elements) {
    std::cout << "\n[ ";
    for (const auto &c : elements)
        std::cout << c << " ";

    std::cout << "]\n";
}
