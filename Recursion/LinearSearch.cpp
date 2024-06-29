#include <iostream>
using namespace std;

bool search(int* nums, int n, int key) {
    if (n == 0)
        return false;

    if (nums[0] == key)
        return true;

    return search(nums + 1, n - 1, key);
}

int main() {
    int nums[] = {3, 2, 5, 1, 6};
    int n = sizeof(nums) / sizeof(int);

    int key = 1;

    if (search(nums, n, key)) 
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}