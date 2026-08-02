#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "printing the array..." << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "printing DONE." << endl;
}

void BubbleSort(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);            
            }
        }
        
    }
}

int main() {
    int arr[6] = {1, 7, 9, 3, 8, 6};

    BubbleSort(arr, 6);
    printArray(arr, 6);
}

