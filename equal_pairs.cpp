#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int equalPairs(vector<vector<int>>& grid) {
    vector<vector<int>> columns;

    for (const auto& row : grid) {
        for (const auto& mum : row) {
            
        }
    }
}

int main() {
    vector<vector<int>> vec = {{3, 1, 2, 2}, {1, 4, 4, 5}, {2, 4, 2, 2}, {2, 4, 2, 2}};
    cout << equalPairs(vec);
    return 0;
}