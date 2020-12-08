// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include <sstream>
#include <algorithm>


class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }

    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }

    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
    return os;
}

//PROTOTYPES
void erase_input ();
void display_menu();
void check_input(char &selection);
void play_current_song(const Song &song);
void display_playlist(const std::list<Song> &playlist, const Song &current_song);
void add_song (std::list<Song> &playlist, std::list<Song>::iterator &it);



int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}
    };

    auto current_song = playlist.begin();
    display_playlist(playlist, *current_song);

    char selection{};

    do {
        display_menu();
        check_input(selection);

        switch (selection) {
            case 'F':
                current_song = playlist.begin();
                play_current_song(*current_song);
                break;
            case 'N':
                std::advance(current_song, 1);
                if (current_song == playlist.end())
                    current_song = playlist.begin();
                play_current_song(*current_song);
                break;
            case 'P':
                if (current_song == playlist.begin())
                    current_song = playlist.end();

                std::advance(current_song, -1);
                play_current_song(*current_song);
                break;
            case 'A':
                add_song(playlist, current_song);
                break;
            case 'L':
                display_playlist(playlist, *current_song);
                break;
            case 'Q':
                std::cout << "\nThanks for listening!\n";
                break;
            default:
                std::cout << "\nInvalid Option! Try Again!\n";
                break;
        }

        //erase_input();

    } while (selection != 'Q');

    return 0;
}



//FUNCTIONS

void erase_input () {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void check_input(char &selection) {
    std::cin >> selection;
    selection = std::toupper(selection);
}

void play_current_song(const Song &song) {
    std::cout << "\nPlaying:\n";
    std::cout << std::left << std::setw(20) << song.get_name();
    std::cout << std::left << std::setw(30) << song.get_artist();
    std::cout << std::left << std::setw(20) << song.get_rating() << "\n";
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    std::cout << "\n";
    std::cout << std::left << std::setw(20) << "NAME";
    std::cout << std::left << std::setw(30) << "ARTIST";
    std::cout << std::left << std::setw(20) << "RATING" << "\n";;



    for (const auto &song : playlist) {
        std::cout << std::left << std::setw(20) << song.get_name();
        std::cout << std::left << std::setw(30) << song.get_artist();
        std::cout << std::left << std::setw(20) << song.get_rating() << "\n";
    }


    std::cout << "\nCurrent Song:\n";
    std::cout << std::left << std::setw(20) << current_song.get_name();
    std::cout << std::left << std::setw(30) << current_song.get_artist();
    std::cout << std::left << std::setw(20) << current_song.get_rating() << "\n";
}

void add_song (std::list<Song> &playlist, std::list<Song>::iterator &it) {
    erase_input();
    std::cout << "\nAdding and playing a new song\n";

    std::string name{};
    std::string artist{};
    int rating{};
    std::string line{};
    std::stringstream lineOS{};

    std::cout << "\nEnter song name: ";
    std::getline(std::cin, name);
    std::cout << "\n" << name << "\n";

    std::cout << "Enter song artist: ";
    std::getline(std::cin, artist);
    std::cout << "\n" << artist << "\n";
    std::cout << "Enter your rating (1-5): ";
    std::cin >> rating;

    playlist.emplace(it, name, artist, rating);

    Song newSong{name, artist, rating};

    it = std::find(playlist.begin(), playlist.end(), newSong);

    play_current_song(*it);

}

