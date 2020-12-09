#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

bool is_palindrome(const std::string& s) {
    std::stack<char> lettersS{};
    std::queue<char> lettersQ;

    for (const auto &w : s) {
        if (isalpha(w)) {
            lettersS.push(std::toupper(w));
            lettersQ.push(std::toupper(w));
        }

    }

    while (!lettersS.empty()) {
        if (lettersS.top() != lettersQ.front())
            return false;

        lettersS.pop();
        lettersQ.pop();
    }



    return true;
}

int main() {
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                           "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                           "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
