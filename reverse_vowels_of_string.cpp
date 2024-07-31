#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

string reverseVowels(string s) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    string vowelOrder = "";
    for (size_t i = 0; i < s.length(); ++i) {
        if (vowels.find(s[i]) != vowels.end())
            vowelOrder += s[i];
    }
    cout << vowelOrder << endl;
    size_t numberVowels = vowelOrder.length();
    for (size_t i = 0; i < s.length(); ++i) {
        if (vowels.find(s[i]) != vowels.end()) {
            s[i] = vowelOrder[numberVowels - 1];
            --numberVowels;
        }
    }

    return s;
}

int main() {
    cout << reverseVowels("leatcodE");
    return 0;
}

