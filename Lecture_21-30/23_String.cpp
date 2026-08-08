// #include <iostream>
// using namespace std;

// int main() {
//     // create 2D array
//     int arr[3][4];

//     /*
//     // taking input -> row wise input
//     for(int row = 0; row < 3; row++) {
//         for(int col = 0; col < 4; col++) {
//             cin >> arr[row][col];
//         }
//     }
//     */

//     // taking input -> col wise input
//     for(int col = 0; col < 4; col++) {
//         for(int row = 0; row < 3; row++) {
//             cin >> arr[row][col];
//         }
//     }

//     // print
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//Print like a wave

// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
//     vector<int> ans;

//     for (int col = 0; col < mCols; col++) {

//         if (col & 1) {
//             // odd Index -> Bottom to top
//             for (int row = nRows - 1; row >= 0; row--) {
//                 cout << arr[row][col] << " ";
//                 ans.push_back(arr[row][col]);
//             }
//         } 
//         else {
//             // 0 or even index -> top to bottom
//             for (int row = 0; row < nRows; row++) {
//                 cout << arr[row][col] << " ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<vector<int>> arr = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int nRows = 3;
//     int mCols = 3;

//     wavePrint(arr, nRows, mCols);

//     return 0;
// }

