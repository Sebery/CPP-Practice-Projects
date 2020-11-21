//
// Created by Sebastian on 20/11/2020.
//

#ifndef STRUCTS_BESTSONG_H
#define STRUCTS_BESTSONG_H

#include <string>

struct BestSong {
    static const std::string artist;
    static const std::string title;
    static const double duration;
    static const double size;
};

const std::string BestSong::artist{"Cage The Elephant"};
const std::string BestSong::title{"Broken Boy"};
const double BestSong::duration{2.43};
const double BestSong::size{287.0};

#endif //STRUCTS_BESTSONG_H
