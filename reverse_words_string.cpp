#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void recursion(istringstream &input, string& result) {
    string word;
    if (input >> word) {
        recursion(input, result);
    }
    if (!result.empty()) {
        result += " ";
    }
    result += word;
}

string reverseWords(string s) {
    string result;
    istringstream input(s);
    recursion(input, result);
    return result;
}

int main() {
    cout << reverseWords("   the sky is blue") << endl;
    return 0;
}

// string reverseWords(string s) {
//     // Reserve space to avoid reallocations
//     string result;
//     result.reserve(s.length());

//     istringstream input(s);
//     string word;
//     vector<string> words;

//     // Extract words and push to vector
//     while (input >> word) {
//         words.push_back(word);
//     }

//     // Append words in reverse order
//     for (auto it = words.rbegin(); it != words.rend(); ++it) {
//         if (!result.empty()) {
//             result += " ";
//         }
//         result += *it;
//     }

//     return result;
// }

// int main() {
//     cout << reverseWords("   the sky is blue") << endl; // Outputs: "blue is sky the"
//     return 0;
// }