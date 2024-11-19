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


//Question 3
#include <iostream>
#include <set>
using namespace std;

set<int> mergeSets(const set<int>& set1, const set<int>& set2) {
    set<int> result(set1.begin(), set1.end());
    result.insert(set2.begin(), set2.end());
    return result;
}

int main() {
    set<int> set1 = {1, 3, 5};
    set<int> set2 = {2, 3, 4, 6};
    set<int> result1 = mergeSets(set1, set2);

    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    set1 = {7, 8};
    set2 = {8, 9, 10};
    set<int> result2 = mergeSets(set1, set2);

    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

