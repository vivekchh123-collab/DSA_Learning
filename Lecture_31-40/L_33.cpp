#include <iostream>
using namespace std;

bool isSorted(int *arr, int size) {
    // Base case: an empty array or single element array is always sorted
    if (size == 0 || size == 1) {
        return true;
    }

    // If current element is greater than next element, it is not sorted
    if (arr[0] > arr[1]) {
        return false;
    } else {
        // Recursive call on the remaining part of the array
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}