#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<int>>& mat, int target) {
    int rows = mat.size();
    int cols = mat[0].size();

    int i = 0;
    int j = cols - 1;

    while (i < rows && j >= 0) {
        if (mat[i][j] == target)
            return true;
        else if (mat[i][j] < target)
            i++;
        else
            j--;
    }

    return false;
}

int main() {
    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target = 5;

    if (search(mat, target))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}