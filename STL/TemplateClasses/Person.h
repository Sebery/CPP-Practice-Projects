//
// Created by Sebastian on 06/12/2020.
//

#ifndef TEMPLATECLASSES_PERSON_H
#define TEMPLATECLASSES_PERSON_H

#include <string>
#include <vector>

template <typename T>
class Person {
private:
    std::string name;
    std::vector<T> data;
public:
    Person (std::string nameValue, std::vector<T> dataValue)
        : name{nameValue}, data{dataValue} {
    }
    std::vector<T> getData() const { return data; }
    void setData (std::vector<T> dataValue) { data = dataValue; }
    std::string getName() const { return name; }
    void setName (std::string nameValue) {  name = nameValue; }
    void displayData () const {
        std::cout << "\n";

        for (const auto &d : data) {
            std::cout << d << "\n";
        }

        std::cout << "\n";
    }
    ~Person () = default;
};


#endif //TEMPLATECLASSES_PERSON_H
