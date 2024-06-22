#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int p = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[p] = nums1[i];
            p--;
            i--;
        } else {
            nums1[p] = nums2[j];
            p--;
            j--;
        }
    }

    while (j >= 0) {
        nums1[p] = nums2[j];
        p--;
        j--;
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);
    
    for (int& num : nums1)
        cout << num << " ";

    return 0;
}