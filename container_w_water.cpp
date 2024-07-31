#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int maxArea(vector<int>& height) {
    int max_area = 0;
    vector<int>::const_iterator left = height.begin();
    vector<int>::const_iterator right = height.end() - 1;

    int tmp;
    while (left < right) {
        tmp = distance(left, right) * min(*left, *right);
        max_area = max(max_area, tmp);
        *left < *right ? ++left : --right;
    }
    return max_area;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height);
    return 0;
}