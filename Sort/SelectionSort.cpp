#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < nums.size(); j++)
            if (nums[minIndex] > nums[j])
                minIndex = j;

        if (minIndex != i)
            swap(nums[minIndex], nums[i]);
    }
}

int main() {
    vector<int> nums = {23, 11, 9, 78, 39, 45, 67};

    sort(nums);
    for (int& num : nums)
        cout << num << " ";

    return 0;
}
