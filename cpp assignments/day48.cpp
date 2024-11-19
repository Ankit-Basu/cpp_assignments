//Question1 
#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> charFrequency(const string& str) {
    map<char, int> freqMap;
    for (char ch : str) {
        freqMap[ch]++;
    }
    return freqMap;
}

int main() {
    string input1 = "HelloWorld";
    string input2 = "C++STL";
    map<char, int> result1 = charFrequency(input1);
    map<char, int> result2 = charFrequency(input2);
    
    for (auto& [ch, freq] : result1) {
        cout << ch << ": " << freq << " ";
    }
    cout << endl;

    for (auto& [ch, freq] : result2) {
        cout << ch << ": " << freq << " ";
    }
    cout << endl;

    return 0;
}

//Question 2
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

map<string, int> calculateAverages(const map<string, vector<int>>& students) {
    map<string, int> averages;
    for (const auto& [name, scores] : students) {
        int sum = 0;
        for (int score : scores) {
            sum += score;
        }
        averages[name] = scores.empty() ? 0 : sum / scores.size();
    }
    return averages;
}

int main() {
    map<string, vector<int>> students = {
        {"Alice", {80, 90, 100}},
        {"Bob", {70, 75, 80}},
        {"Charlie", {60}}
    };

    map<string, int> result = calculateAverages(students);
    for (const auto& [name, avg] : result) {
        cout << "\"" << name << "\": " << avg << " ";
    }
    cout << endl;

    return 0;
}
