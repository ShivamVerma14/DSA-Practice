#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while  (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= arr[0])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int binarySearch(vector<int>& arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int search(vector<int>& arr, int key) {
    int n = arr.size();
    int pivot = findPivot(arr);

    if (key >= arr[pivot] && key <= arr[n - 1])
        return binarySearch(arr, pivot, n - 1, key);
    else
        return binarySearch(arr, 0, pivot - 1, key);
}

int main() {
    vector<int> arr = {7, 9, 1, 2, 3};
    int key = 2;

    int index = search(arr, key);
    cout << index << endl;

    return 0;
}