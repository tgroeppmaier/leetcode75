#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <unordered_map>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    // unordered_set<int> unique_nums(arr.begin(), arr.end());
    unordered_map<int, int> number_occurrences;

    for (int num : arr) {
        ++number_occurrences[num];
    }

    vector<int> no_occurr_vec;
    for (const std::pair<const int, int>& num : number_occurrences) {
            no_occurr_vec.push_back(num.second);
        }
    
    for (auto it = no_occurr_vec.begin(); it != no_occurr_vec.end(); ++it) {
        if (count(it, no_occurr_vec.end(), *it) != 1)
            return false;
    }
    return true;
}

// bool areAllElementsUnique(const std::vector<int>& arr) {
//     std::unordered_set<int> seen;
//     for (int num : arr) {
//         if (!seen.insert(num).second) {
//             return false;
//         }
//     }
//     return true;
// }

int main() {
    vector<int> arr = {1,2,2,1,1,3};
    cout << uniqueOccurrences(arr) << endl;

    return 0;
}