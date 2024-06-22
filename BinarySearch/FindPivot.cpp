#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= arr[0])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main() {
    vector<int> arr = {6, 7, 9, 1, 2, 3};

    int pivot = findPivot(arr);
    cout << pivot << endl;

    return 0;
}