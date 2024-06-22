#include <iostream>
#include <vector>
using namespace std;

bool isSortedRotated(vector<int>& nums) {
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i - 1] > nums[i])
            count++;
    }

    if (nums.back() > nums.front())
        count++;

    return count <= 1;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};

    if (isSortedRotated(nums))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}