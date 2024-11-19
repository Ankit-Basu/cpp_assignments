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
