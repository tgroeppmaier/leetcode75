#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <unordered_map>

using namespace std;

bool closeStrings(string word1, string word2) {
    if (word1.size() != word2.size()) {
        return false;
    }
    for (char c : word1) {
        if (word2.find(c) == string::npos)
            return false;
    }

    unordered_map<char, int> ocurrences1;
    unordered_map<char, int> ocurrences2;
    for (size_t i = 0; i < word1.size(); ++i) {
        ++ocurrences1[word1[i]];
        ++ocurrences2[word2[i]];
    }

    vector<int> freq1, freq2;
    for (const auto& pair : ocurrences1) {
        freq1.push_back(pair.second);
    }
    for (const auto& pair : ocurrences2) {
        freq2.push_back(pair.second);
    }
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());
    return freq1 == freq2;
}

int main() {
    cout << closeStrings("cabbba", "aabbss");
    return 0;
}