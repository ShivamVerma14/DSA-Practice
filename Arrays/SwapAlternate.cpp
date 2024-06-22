#include <iostream>
#include <vector>
using namespace std;

void swapAlternate(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            swap(nums[i], nums[i + 1]);
        }
    }
}

int main() {
    vector<int> nums = {1, 2, 7, 8, 5, 6};
    swapAlternate(nums);

    for (int& num : nums)
        cout << num << " ";

    return 0;
}