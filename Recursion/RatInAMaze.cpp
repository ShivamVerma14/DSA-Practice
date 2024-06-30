#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& maze, int n, int x, int y, vector<vector<int>>& visited) {
    return (
        (x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && maze[x][y] == 1
    );
}

void solve(vector<vector<int>>& maze, int n, string path, vector<string>& paths, int x, int y, vector<vector<int>>& visited) {
    if (x == n - 1 && y == n - 1) {
        paths.push_back(path);
        return;
    }

    visited[x][y] = 1;

    if (isSafe(maze, n, x + 1, y, visited)) {
        path.push_back('D');
        solve(maze, n, path, paths, x + 1, y, visited);
        path.pop_back();
    } 
    else if (isSafe(maze, n, x - 1, y, visited)) {
        path.push_back('L');
        solve(maze, n, path, paths, x - 1, y, visited);
        path.pop_back();
    }
    else if (isSafe(maze, n, x, y + 1, visited)) {
        path.push_back('R');
        solve(maze, n, path, paths, x, y + 1, visited);
        path.pop_back();
    }
    else if (isSafe(maze, n, x, y - 1, visited)) {
        path.push_back('U');
        solve(maze, n, path, paths, x + 1, y, visited);
        path.pop_back();
    }
    
    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>>& maze, int n) {
    vector<string> paths;
    string path = "";

    vector<vector<int>> visited = maze;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            visited[i][j] = 0;

    int x = 0;
    int y = 0;

    solve(maze, n, path, paths, x, y, visited);
    sort(paths.begin(), paths.end());

    return paths;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    int n = 4;

    vector<string> paths = findPath(maze, n);
    for (string& path : paths)
        cout << path << endl;

    return 0;
}