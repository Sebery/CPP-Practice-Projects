#include <iostream>

using std::cout, std::cin;

int *apply_all (const int *const array1, size_t array1_size, const int *const array2, size_t array2_size);
void print (const int *const array, size_t size);

int main() {
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    const size_t results_size{array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);

    delete [] results;

    cout << "\n";

    return 0;
}

int *apply_all (const int *const array1, size_t array1_size, const int *const array2, size_t array2_size) {
    int *tempArr{nullptr};
    tempArr = new int[array1_size * array2_size];

    int counter{0};
    for (size_t i{0}; i < array2_size; i++) {
        for (size_t j{0}; j < array1_size; j++) {
            tempArr[counter] = array2[i] * array1[j];
            counter++;
        }
    }

    return tempArr;
}

void print (const int *const array, size_t size) {
    cout << "[ ";

    for (size_t i{0}; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << "]\n";
}
