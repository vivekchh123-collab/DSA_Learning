#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "printing the array..." << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "printing DONE." << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int arr[6] = {1, 7, 9, 3, 8, 6};

    selectionSort(arr, 6);
    printArray(arr, 6);
}