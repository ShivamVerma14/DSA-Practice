#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(vector<int>& nums, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;

    vector<int> temp;
    int count = 0;

    while (i <= mid && j <= high) {
        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i]);
            i++;
        } else {
            temp.push_back(nums[j]);
            j++;
            count += (mid + 1 - i);
        }
    }

    while (i <= mid) {
        temp.push_back(nums[i]);
        i++;
    }

    while (j <= high) {
        temp.push_back(nums[j]);
        j++;
    }

    for (int k = low; k <= high; k++)
        nums[k] = temp[k - low];

    return count;
}

int mergeSortAndCount(vector<int>& nums, int low, int high) {
    int count = 0;
    
    if (low < high) {
        int mid = low + (high - low) / 2;

        count += mergeSortAndCount(nums, low, mid);
        count += mergeSortAndCount(nums, mid + 1, high);

        count += mergeAndCount(nums, low, mid, high);
    }

    return count;
}

int main() {
    vector<int> nums = {1, 20, 6, 4, 5};

    int count = mergeSortAndCount(nums, 0, nums.size() - 1);
    cout << count << endl;

    return 0;
}