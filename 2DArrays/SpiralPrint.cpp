#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralForm(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    int startRow = 0, startCol = 0;
    int endRow = rows - 1, endCol = cols - 1;
    int total = rows * cols;

    vector<int> ans;

    while (total) {
        for (int i = startCol; total && i <= endCol; i++) {
            ans.push_back(mat[startRow][i]);
            total--;
        }
        startRow++;

        for (int i = startRow; total && i <= endRow; i++) {
            ans.push_back(mat[i][endCol]);
            total--;
        }
        endCol--;

        for (int i = endCol; total && i >= startCol; i--) {
            ans.push_back(mat[endRow][i]);
            total--;
        }
        endRow--;

        for (int i = endRow; total && i >= startRow; i--) {
            ans.push_back(mat[i][startCol]);
            total--;
        }
        startCol++;
    }

    return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans = spiralForm(mat);
    for (int& num : ans)
        cout << num << " ";
        
    return 0;
}