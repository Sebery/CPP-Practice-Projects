#include <iostream>
#include "Modifier.h"
#include "Movie.h"



int main() {
    Movie favoriteMovie{"Avatar", 2.3};

    Modifier mod;
    mod.displayData(favoriteMovie);

    return 0;
}
