#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "printing the array..." << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "printing DONE." << endl;
}

//For loop

// void InsertionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int temp = arr[i];
//         int j = i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }

//While loop

void InsertionSort(int arr[],int n){
    int i = 1;
    while(i<n){
        int temp=arr[i];
        int j=i-1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
}

int main() {
    int arr[6] = {1, 7, 9, 3, 8, 6};

    InsertionSort(arr, 6);
    printArray(arr, 6);
}

