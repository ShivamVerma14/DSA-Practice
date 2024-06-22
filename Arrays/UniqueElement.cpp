#include <iostream>
#include <vector>
using namespace std;

int findUnique(const vector<int>& nums) {
    int unique = 0;

    for (const int& num : nums)
        unique ^= num;

    return unique;
}

int main() {
    vector<int> nums = {3, 7, 2, 2, 7, 3, 4};
    int unique = findUnique(nums);

    cout << unique << endl;
    return 0;
}