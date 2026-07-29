#include<iostream>
using namespace std;

// int main (){
//     int arr[]={1,4,45,6,10,8};

//     //have to print triplet with given sum
//     for(int i = )

// }

//sort (0,1)

// void printArray(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<< arr[i] << " ";
//     }
//     cout << endl;
// }
// void sortOne(int arr[],int n){
//     int left = 0, right = n-1;
//     while (left<right)
//     {
//         while (arr[left] == 0 && left<right)
//         {
//             left++;
//         }
//         while (arr[right] == 1 && left<right)
//         {
//             right--;
//         }
//         //when arr[i]==1 and arr[j]==0
//         if( left<right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
        
        
//     }
    
// }
// int main(){
//     int arr[8] = {1,1,0,0,0,0,1,0};

//     sortOne(arr,8);
//     printArray(arr,8);
//     return 0;
// }

// void printArray(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<< arr[i] << " ";
//     }
//     cout << endl;
// }
// void sortTwo(int arr[],int n){
//     int k = 0;
//     int count =0;
//     for(int i = 0;i<n;i++){
//         if(arr[i] == 0){
//             swap(arr[k],arr[i]);
//             arr[k] == 0;
//             k++;
//         }
//         cout<<count++<<":";
//         printArray(arr,8);
//     }
//     int left = k, right = n-1;
//     while (left<right)
//     {
//         while (arr[left] == 1 && left<right)
//         {
//             left++;
//         }
//         while (arr[right] == 2 && left<right)
//         {
//             right--;
//         }
//         //when arr[i]==2 and arr[j]==1
//         if( left<right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
        
        
//     }
    
// }
// int main(){
//     int arr[9] = {0,2,0,1,2,1,1,2,0};

//     sortTwo(arr,9);
//     printArray(arr,9);
//     return 0;
// }