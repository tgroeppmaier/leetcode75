#include <string>
#include <iostream>
#include <vector>
// #include <algorithm>
#include <numeric>
#include <unordered_set>

using namespace std;


vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());
    
    vector<int> diff1, diff2;
    
    for (int num : set1) {
        if (set2.count(num) == 0) {
            diff1.push_back(num);
        }
    }
    
    for (int num : set2) {
        if (set1.count(num) == 0) {
            diff2.push_back(num);
        }
    }
    return {diff1, diff2};
}

int main() {
    vector<int> nums1 = {1, 2, 3, 2, 0, 7, 6, 4};
    vector<int> nums2 = {2, 4, 6, 56};
    vector<vector<int>> result = findDifference(nums1, nums2);

    // Print the result for verification
    cout << "Unique to nums1: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Unique to nums2: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}