#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


double findMaxAverage(vector<int>& nums, int k) {
    double tmp = 0;
    size_t i = 0;
    for (; i < static_cast<size_t>(k); ++i) {
        tmp += nums[i];
    }
    double maxSum = tmp;
    for (; i < nums.size(); ++i) {
        tmp += nums[i];
        tmp -= nums[i - k];
        maxSum = max(maxSum, tmp);
    }
    return maxSum / k;
}

int main() {
    vector<int> nums = {1,12,-5,-6,50,3};
    cout << findMaxAverage(nums, 4) << endl;
    return 0;
}