#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int n, const vector<vector<int>>& visited, const vector<vector<int>>& m) {
    if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && m[x][y] == 1) {
        return true;
    }
    return false;
}

void solve(const vector<vector<int>>& m, int n, vector<string>& ans,
           int x, int y, vector<vector<int>>& visited, string& path) {

    // Base case: reached bottom-right
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0; // backtrack
}

vector<string> findPath(vector<vector<int>>& m, int n) {
    vector<string> ans;

    if (n == 0 || m[0][0] == 0) {
        return ans;
    }

    vector<vector<int>> visited(n, vector<int>(n, 0));
    string path = "";

    solve(m, n, ans, 0, 0, visited, path);

    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    // Example input: n = 4
    int n = 4;

    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> paths = findPath(m, n);

    if (paths.empty()) {
        cout << -1 << endl;
    } else {
        for (const string& p : paths) {
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}