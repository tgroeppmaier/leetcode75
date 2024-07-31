#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numbers>

using namespace std;

int largestAltitude(vector<int>& gain) {
    int max_alt = 0;
    int tmp = 0;

    for (const auto& g : gain) {
        tmp += g;
        max_alt = max(max_alt, tmp);
    }
    return max_alt;
}

int main () {
    vector<int> gain = {-5,1,5,0,-7};
    cout << largestAltitude(gain) << endl;
    return 0;
}