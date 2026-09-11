#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(const string& digits, string& output, int index,
           vector<string>& ans, const string mapping[]) {
    // Base case
    if (index >= digits.length()) {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);

        solve(digits, output, index + 1, ans, mapping);

        output.pop_back(); // Backtracking
    }
}

int main() {
    string digits = "23";
    vector<string> ans;
    string output;
    int index = 0;

    string mapping[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    solve(digits, output, index, ans, mapping);

    for (const string& combination : ans) {
        cout << combination << " ";
    }

    return 0;
}