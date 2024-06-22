#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& arr, int m) {
    int low = m + 1;
    int high = arr.size() - 1;

    while (low < high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 3;

    reverse(arr, m);
    for (int& num : arr)
        cout << num << " ";

    return 0;
}