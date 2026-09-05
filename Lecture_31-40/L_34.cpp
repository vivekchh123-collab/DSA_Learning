#include <iostream>
using namespace std;

//Reverse the string

// void reverse(string s, int k) {
//     if (k == 0) {
//         return;
//     }
//     cout << s[k - 1];      // Pehle last character print karo
//     reverse(s, k - 1);     // Phir baaki string reverse karo
// }

// int main() {
//     int k = 5;
//     string s = "abcde";
//     reverse(s, k);          // Sirf function call karo, cout nahi
//     cout << endl;
//     return 0;
// }

//Check palidrome

// bool check(string s, int left, int right) {
//     // Base case: pointers cross ho gaye → palindrome hai
//     if (left >= right) {
//         return true;
//     }
    
//     // Characters match nahi karte → palindrome nahi
//     if (s[left] != s[right]) {
//         return false;
//     }
    
//     // Recursion: andar ke characters check karo
//     return check(s, left + 1, right - 1);
// }

// int main() {
//     string s = "abba";
//     int n = s.length();
    
//     bool result = check(s, 0, n - 1);  // Result store karo
    
//     if (result) {
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not Palindrome" << endl;
//     }
    
//     return 0;
// }

// Power number

// int power(int a, int b) {
//     // Base case 1: a^0 = 1
//     if (b == 0) {
//         return 1;
//     }
    
//     // Base case 2: a^1 = a
//     if (b == 1) {
//         return a;
//     }
    
//     // Recursive case: a^b = a * a^(b-1)
//     return a * power(a, b - 1);
// }

// int main() {
//     int a = 3;
//     int b = 2;
//     cout << power(a, b) << endl;  // Output: 9
//     return 0;
// }

//Bubble Sort using recursion 
void bubblesort(int arr[],int n){
    if(n == 0 || n == 1){
        return ;
    }
    for(int i = 0;i<n-1;i++){
        if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
    }
    return bubblesort(arr,n-1);

}
int main(){
    int n = 5;
    int arr[] = {4,5,2,1,3};
    bubblesort(arr,n);
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<endl;
    }
        return 0;
}