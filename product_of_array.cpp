#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> leftProducts(n, 1), rightProducts(n, 1), result(n);

    // Calculate left products
    for (int i = 1; i < n; ++i) {
        leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
    }

    // Calculate right products
    for (int i = n - 2; i >= 0; --i) {
        rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
    }

    // Calculate result by multiplying left and right products
    for (int i = 0; i < n; ++i) {
        result[i] = leftProducts[i] * rightProducts[i];
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);
    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}