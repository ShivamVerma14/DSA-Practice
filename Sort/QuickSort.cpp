#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int p = low;
    int i = low;
    int j = high;

    while (i < j) {
        while (nums[i] <= nums[p])
            i++;

        while (nums[j] > nums[p])
            j--;

        if (i < j)
            swap(nums[i], nums[j]);
    }

    swap(nums[j], nums[p]);
    return j;
}

void sort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pi = partition(nums, low, high);

        sort(nums, low, pi - 1);
        sort(nums, pi + 1, high);
    }
}

int main() {
    vector<int> nums = {10, 7, 8, 9, 1, 5};
    int n = nums.size();

    sort(nums, 0, n - 1);
    for (int& num : nums)
        cout << num << " ";

    return 0;
}
