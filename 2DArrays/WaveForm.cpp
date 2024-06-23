#include <iostream>
#include <vector>
using namespace std;

void printWaveForm(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    for (int col = 0; col < cols; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < rows; row++)
                cout << mat[row][col] << " ";
        } else {
            for (int row = rows - 1; row >= 0; row--)
                cout << mat[row][col] << " ";
        }
    }
}

int main() {
    vector<vector<int>> mat = {{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};
    printWaveForm(mat);

    return 0;
}