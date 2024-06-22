#include <iostream>
#include <vector>
using namespace std;

int firstPos(vector<int>& nums, int key) {
    int low = 0;
    int high = nums.size() - 1;

    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key) {
            ans = mid;
            high = mid - 1;
        } else if (nums[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int lastPos(vector<int>& nums, int key) {
    int low = 0;
    int high = nums.size() - 1;

    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key) {
            ans = mid;
            low = mid + 1;
        } else if (nums[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

pair<int, int> firstAndLastPos(vector<int>& nums, int key) {
    int first = firstPos(nums, key);
    int last = lastPos(nums, key);

    return pair(first, last);
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 2, 2, 2, 2};
    int key = 2;

    pair<int, int> positions = firstAndLastPos(nums, key);
    cout << positions.first << " " << positions.second << endl;

    return 0;
}