#include <iostream>
using namespace std;

// sorted array checking using recursion

// bool isSorted(int *arr, int size) {
//     // Base case: an empty array or single element array is always sorted
//     if (size == 0 || size == 1) {
//         return true;
//     }

//     // If current element is greater than next element, it is not sorted
//     if (arr[0] > arr[1]) {
//         return false;
//     } else {
//         // Recursive call on the remaining part of the array
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }

// int main() {
//     int arr[5] = {2, 4, 6, 8, 9};
//     int size = 5;

//     bool ans = isSorted(arr, size);

//     if (ans) {
//         cout << "Array is sorted" << endl;
//     } else {
//         cout << "Array is not sorted" << endl;
//     }

//     return 0;
// }


//sum using recusrion 

// int sum1(int arr[], int n) {
//     // Base case: jab array empty ho
//     if (n == 0) {
//         return 0;
//     }
    
//     // Current element + baaki array ka sum
//     return arr[n - 1] + sum1(arr, n - 1);
// }

// int main() {
//     int arr[] = {3, 2, 5, 1, 6};
//     cout << "Sum is: " << sum1(arr, 5) << endl;
//     return 0;
// }


// Linear serach

// bool linearSearch(int arr[], int size, int k) {
//     // base case
//     if (size == 0)
//         return false;

//     if (arr[0] == k) {
//         return true;
//     } else {
//         bool remainingPart = linearSearch(arr + 1, size - 1, k);
//         return remainingPart;
//     }
// }

// int main() {
//     int arr[5] = {3, 5, 1, 2, 6};
//     int size = 5;
//     int key = 6;

//     bool ans = linearSearch(arr, size, key);

//     if (ans) {
//         cout << "Element found" << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }

//Binary search key

bool binarySearch(int arr[], int s, int e, int k) {
    // element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k) {
        return binarySearch(arr, mid + 1, e, k);
    } else {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 18;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if (ans) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}