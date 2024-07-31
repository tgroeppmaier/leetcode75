#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int maxVowels(string s, int k) {
    int tmp = 0;
    auto isVowel = [](char ch) -> bool {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    };

    for (int i = 0; i < k; ++i) {
        if (isVowel(s[i])) ++tmp;
    }

    int result = tmp;
    for (size_t i = k; i < s.size(); ++i) {
        if (isVowel(s[i])) ++tmp;
        if (isVowel(s[i - k])) --tmp;
        result = max(tmp, result);
    }
    return result;
}

int main() {
    cout << maxVowels("abciiidef", 3) << endl;
    return 0;
}
