#include <string>
#include <iostream>

using namespace std;

bool isSubsequence(string s, string t) {
    auto its = s.begin();
    auto itt = t.begin();
    while (itt != t.end() && its != s.end()) {
        if (*its == *itt) {
            ++its;
        }
        ++itt;
    }
    return its == s.end();
}

int main() {
    cout << isSubsequence("abc", "ahbgdc") << endl; // Outputs: 1 (true)
    return 0;
}