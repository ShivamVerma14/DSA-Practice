#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<int>>& mat, int key) {
    int rows = mat.size();
    int cols = mat[0].size();

    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int element = mat[mid / cols][mid % cols];

        if (element == key)
            return true;
        else if (element < key) 
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}

int main() {
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int key = 30;

    if (search(mat, key)) 
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}