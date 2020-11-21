#include <iostream>
#include <string>
#include "BestSong.h"

int main() {
    std::cout << "\nBEST SONG!\n";
    std::cout << "Artist: " << BestSong::artist << "\n";
    std::cout << "Title: " << BestSong::title << "\n";
    std::cout << "Duration: " << BestSong::duration << "\n";
    std::cout << "Size: " << BestSong::size << "kb\n";


    return 0;
}
