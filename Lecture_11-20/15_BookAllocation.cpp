#include<iostream>
using namespace std;


//BooKAllocation same code for Painter Partition Problem

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int BookAllocation(int arr[], int n, int m){
    int s = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;  // Added return statement
}

int main() {
    int arr[4] = {5,5,5,5};
    cout << BookAllocation(arr, 4, 2);
    return 0;
}


//Aggressive Cows

bool isPossible(int stalls[], int n, int k, int mid) {
    int cowCount = 1;  // First cow placed at first stall
    int lastPos = stalls[0];
    
    for (int i = 1; i < n; i++) {  // Start from i=1, not i=0
        if (stalls[i] - lastPos >= mid) {
            cowCount++;  // Place another cow
            if (cowCount == k) {  // All k cows placed successfully
                return true;
            }
            lastPos = stalls[i];  // Update last position
        }
    }
    return false;  // Could not place all k cows
}

int aggressiveCows(int stall[], int n, int k) {
    int s = 0;
    int max1 = -1;
    for (int i = 0; i < n; i++) {
        max1 = max(max1, stall[i]);
    }
    int e = max1;
    int ans = -1;
    // Removed unnecessary mid calculation here
    
    while (s <= e) {
        int mid = s + (e - s) / 2;  // mid calculated inside loop
        if (isPossible(stall, n, k, mid)) {  // Fixed: added 'n' parameter
            ans = mid;
            s = mid + 1;  // Try for larger distance
        } else {
            e = mid - 1;  // Reduce distance
        }
    }
    return ans;
}