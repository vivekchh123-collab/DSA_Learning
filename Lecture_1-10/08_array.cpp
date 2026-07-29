#include<iostream>
#include <climits>
using namespace std;

// void printArray(int arr[],int size){
//     cout<< "printing the array..."<<endl;
//     //print the array
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i] << " "<<endl;
//     }
//     cout<< " printing DONE."<<endl;
    
// }
// int main() {
//     int number[10];
//     printArray(number,10);
// }

//max and min code:

// int getMin(int num[],int n){
//     int min = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if(num[i] < min){
//             min = num[i];
//         }
//     }
//     return min;
// }

// int getMax(int num[],int n){
//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         // if(num[i] > max){
//         //     max = num[i];
//         // }

//         //another way or predefine-->

//         maxi = max(maxi,num[i]);// same minmum min(mini,num[i]);
//     }
//     return max;
// }

// int main (){


//     int size;
//     cout<<"Enter the size..";
//     cin>> size;

//     int num[100];

//     //taking input in array
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }

//     cout<<"Maximum value is:"<< getMax(num,size)<<endl;
//     cout<<"Minimum value is:"<< getMin(num,size)<<endl;
    
//     return 0;
// }


//sum of array:

int getSUM(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
      sum = sum + arr[i];
    }
    return sum;
}
int main (){

    int size;
    cout<<"Enter the size..";
    cin>> size;

    int num[100];

    //taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout<<"Sum of the array is:"<<getSUM(num,size) << endl;

    return 0;
}
