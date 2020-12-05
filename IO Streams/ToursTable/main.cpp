#include <iostream>
#include <iomanip>
#include <vector>
#include <string>



struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

//PROTOTYPES
void setSections (const std::vector<std::string> &elements, const size_t &size);
void setMainContent (const std::vector<Country> &countries, const size_t &size);

int main()
{
    Tours tours
            { "Tour Ticket Prices from Miami",
              {
                      {
                              "Colombia", {
                              { "Bogota", 8778000, 400.98 },
                              { "Cali", 2401000, 424.12 },
                              { "Medellin", 2464000, 350.98 },
                              { "Cartagena", 972000, 345.34 }
                      },
                      },
                      {
                              "Brazil", {
                              { "Rio De Janiero", 13500000, 567.45 },
                              { "Sao Paulo", 11310000, 975.45 },
                              { "Salvador", 18234000, 855.99 }
                      },
                      },
                      {
                              "Chile", {
                              { "Valdivia", 260000, 569.12 },
                              { "Santiago", 7040000, 520.00 }
                      },
                      },
                      { "Argentina", {
                              { "Buenos Aires", 3010000, 723.77 }
                      }
                      },
              }
            };

    std::cout << std::setprecision(2);
    std::cout << std::fixed;

    //CONSTANTS AND VARIABLES
    std::vector<std::string> sections{"Country", "City", "Population", "Price"};

    const size_t sectionsW{20};
    const size_t spaceW{sectionsW * sections.size() + 1};
    const size_t titleW{spaceW - tours.title.size()};
    int count{0};

    //SET HEADER
    std::cout << "\n" << std::setw(titleW) << std::right << tours.title << "\n\n";
    setSections(sections, sectionsW);
    std::cout << "\n" << std::right << std::setfill('-') << std::setw(spaceW) << ' ' << "\n";

    //SET MAIN CONTENT
    setMainContent(tours.countries, sectionsW);


    std::cout << "\n\n";
    return 0;
}

void setSections (const std::vector<std::string> &elements, const size_t &size) {
    for (const auto &s : elements) {
        if (s == "Population" || s == "Price")
            std::cout << std::right << std::setw(size) << s;
        else
            std::cout << std::left << std::setw(size) << s;
    }
}

void setMainContent (const std::vector<Country> &countries, const size_t &size) {
    int count{0};

    for (const auto &c : countries) {
        std::cout << std::left << std::setfill(' ') << std::setw(size) << c.name;

        for (const auto &city : c.cities) {
            if (count <= 0) {
                std::cout << std::left << std::setfill(' ') << std::setw(size) << city.name;
                std::cout << std::right << std::setw(size) << city.population;
                std::cout << std::right << std::setw(size) << city.cost << "\n";
            } else {
                std::cout << std::left << std::setfill(' ') << std::setw(size) << "";
                std::cout << std::left << std::setw(size) << city.name;
                std::cout << std::right << std::setw(size) << city.population;
                std::cout << std::right << std::setw(size) << city.cost << "\n";
            }
            count++;
        }
        count = 0;
    }
}
