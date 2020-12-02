#include <iostream>
#include <memory>
#include "Computer.h"
#include "Laptop.h"
#include <vector>


int main() {
    //UNIQUE POINTERS
    std::cout << "\n=== UNIQUE POINTERS ===\n";

    std::unique_ptr<Computer> p1 = std::make_unique<Laptop>(16);
    std::unique_ptr<Computer> p2 = std::make_unique<Laptop>(4);
    std::unique_ptr<Computer> p3 = std::make_unique<Laptop>(8);

    std::vector<std::unique_ptr<Computer>> computers{};
    computers.push_back(std::move(p1));
    computers.push_back(std::move(p2));
    computers.push_back(std::move(p3));


    for (const auto &c : computers)
        std::cout << *c;


    //SHARED POINTERS
    std::cout << "\n=== SHARED POINTERS ===\n";

    std::shared_ptr<Computer> t1 = std::make_shared<Laptop>(48);
    std::shared_ptr<Computer> t2 = std::make_shared<Laptop>();
    std::shared_ptr<Computer> t3 = std::make_shared<Laptop>(6);

    {
        std::vector<std::shared_ptr<Computer>> otherComputers{t1, t2, t3};

        for (const auto &c : otherComputers)
            std::cout << *c;

        for (const auto &c : otherComputers)
            std::cout << c.use_count() << "\n";
    }

    std::cout << t1.use_count() << "\n";
    std::cout << t2.use_count() << "\n";
    std::cout << t3.use_count() << "\n";

    //WEAK POINTERS
    std::cout << "\n=== WEAK POINTERS ===\n";

    std::weak_ptr<Computer> s1;

    std::vector<std::weak_ptr<Computer>> laptops{s1};


    {
        std::shared_ptr<Computer> q1 = std::make_shared<Laptop>(24);
        s1 = q1;

        for (const auto &c : laptops) {
            std::shared_ptr<Computer> test = s1.lock();
            if (test)
                std::cout << "\nObject Available: " << *test << "\n";
            else
                std::cout << "\nObject No Available\n";
        }
    }

    for (const auto &c : laptops) {
        std::shared_ptr<Computer> test = s1.lock();
        if (test)
            std::cout << "\nObject Available: " << *test << "\n";
        else
            std::cout << "\nObject No Available\n";
    }

    //CUSTOM DELETERS
    std::cout << "\n=== CUSTOM DELETERS ===\n";



    std::shared_ptr<Computer> b1{new Laptop(1), [] (Computer *b) {
        std::cout << "\nDeleting a custom Laptop\n";
    }};



    return 0;
}
