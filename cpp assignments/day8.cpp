// Question 1
#include <iostream>
#include <string>

int stringLength(const std::string &str) {
    return str.length();
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << stringLength(input) << std::endl;
    return 0;
}



//Question 2
#include <iostream>
#include <string>

int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    char character;
    std::getline(std::cin, input);
    std::cin >> character;
    std::cout << countCharacter(input, character) << std::endl;
    return 0;
}


//Question 3
#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2;
}

int main() {
    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    std::cout << concatenateStrings(str1, str2) << std::endl;
    return 0;
}


