#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int n = nums.size();

    int ans = n * (n - 1) / 2;
    for (int& num : nums)
        ans -= num;

    return -1 * ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 4};

    int ans = findDuplicate(nums);
    cout << ans << endl;

    return 0;
}