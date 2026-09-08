#include <iostream>
using namespace std;

// // Merge two sorted parts: arr[left..mid] and arr[mid+1..right]
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[mid + 1 + j];

//     int i = 0, j = 0, k = left;

//     // Merge back into arr[left..right]
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j])
//             arr[k++] = L[i++];
//         else
//             arr[k++] = R[j++];
//     }

//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }

// // Recursive merge sort
// void mergeSort(int arr[], int left, int right) {
//     if (left >= right) return;          // base case

//     int mid = left + (right - left) / 2;
//     mergeSort(arr, left, mid);          // sort left half
//     mergeSort(arr, mid + 1, right);     // sort right half
//     merge(arr, left, mid, right);       // merge them
// }

// int main() {
//     int arr[] = {5, 2, 9, 1, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     mergeSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

//Inversion count 

// Merge two halves and count inversions
long long mergeAndCount(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    long long invCount = 0;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            // L[i] > R[j] => (i...n1-1) all form inversions with R[j]
            arr[k++] = R[j++];
            invCount += (n1 - i);
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    return invCount;
}

// Recursive merge sort that returns inversion count
long long mergeSortAndCount(int arr[], int left, int right) {
    long long invCount = 0;

    if (left >= right) return 0;  // base case

    int mid = left + (right - left) / 2;

    invCount += mergeSortAndCount(arr, left, mid);        // left half
    invCount += mergeSortAndCount(arr, mid + 1, right);   // right half
    invCount += mergeAndCount(arr, left, mid, right);     // merge + count

    return invCount;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long inversions = mergeSortAndCount(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nInversion count: " << inversions << endl;

    return 0;
}