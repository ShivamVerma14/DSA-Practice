#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int low, int high, int mid) {
    int i = low;
    int j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= high) {
        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i]);
            i++;
        } else {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(nums[i]);
        i++;
    }

    while  (j <= high) {
        temp.push_back(nums[j]);
        j++;
    }

    for (int k = low; k <= high; k++)
        nums[k] = temp[k - low];
}

void sort(vector<int>& nums, int low, int high) {
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    sort(nums, low, mid);
    sort(nums, mid + 1, high);
    merge(nums, low, high, mid);
}

int main() {
    vector<int> nums = {2, 5, 1, 9, 6};
    int len = nums.size();
    
    sort(nums, 0, len - 1);
    for (int& num : nums)
        cout << num << " ";

    return 0;
}