#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
void display(const std::vector<T> &elements);



int main() {
    std::vector<int> numbers{1, 2, 3, 4, 5};
    std::vector<int> numbers2{0, 0, 0, 0, 0};

    display(numbers);

    auto numbers2IT = numbers2.begin();
    while (numbers2IT != numbers2.end()) {
        auto numbersIT = std::find(numbers.begin(), numbers.end(), 2);

        if (numbersIT != numbers.end()) {
            numbers.insert(numbersIT, *numbers2IT);
            numbers2IT++;
        }
    }

    display(numbers);

    std::copy(numbers.begin(), numbers.end(), std::back_inserter(numbers2));

    display(numbers2);

    std::sort(numbers2.begin(), numbers2.end());

    display(numbers2);

    numbers.clear();

    std::copy_if(numbers2.begin(), numbers2.end(), std::back_inserter(numbers), [] (int x) {
        return (x != 0);
    });

    display(numbers);


    return 0;
}



template <typename T>
void display(const std::vector<T> &elements) {
    std::cout << "\n[ ";

    for (const auto &v : elements) {
        std::cout << v << " ";
    }

    std::cout << "]\n";
}
