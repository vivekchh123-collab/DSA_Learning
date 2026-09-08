#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
    // base case
    if (index >= str.length()) {
        if (output.length() > 0) {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    solve(str, output + element, index + 1, ans);
}

int main() {
    string str = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;

    solve(str, output, index, ans);

    cout << "Subsequences:" << endl;
    for (string s : ans) {
        cout << s << endl;
    }

    return 0;
}