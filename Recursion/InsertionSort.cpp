#include <iostream>
using namespace std;

void sort(int* nums, int n, int beg) {
    if (n == 0 || n == 1)
        return;

    if (beg >= n) 
        return;

    int temp = nums[beg];
    
    int j = beg - 1;
    while (j >= 0 && nums[j] > temp) {
        nums[j + 1] = nums[j];
        j--;
    }

    nums[j + 1] = temp;
    
    sort(nums, n, beg + 1);
}

int main() {
    int nums[] = {2, 5, 1, 6, 9};
    int n = sizeof(nums) / sizeof(int); 

    sort(nums, n, 1);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}