#include<iostream>
using namespace std;

int BinarySearch(int arr[],int target,int n){
    int left=0,right=n-1;
    int mid = (left+right)/2;

    while (left<=right)
    {
        if(arr[mid]== target){
            return mid;
        }
        if(target>arr[mid]){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
        mid = (left+right)/2;

    }
    return -1;
}
int main (){
    int arr[7]={5,19,35,67,69,71,76};
    int target;
    cout<<"Enter the number which want to find ..";
    cin>>target;

    cout<<"index of "<<target<<" is :"<<BinarySearch(arr,target,7);

}


// note mid = left + (right - left)/2;
//because (left + right ) {int have 2^31-1 value store here we have add 2time of that value which exceed the int value that why we use it}