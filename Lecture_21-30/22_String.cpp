#include<iostream>
using namespace std;

//find the length of string
// int getLength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
//  }
 //Reverse a string...
void reverse(string &name, int k,int n){
    int s=k;
    int e=n-1;
    while (s<e){
swap(name[s++],name[e--]);
    }   
}

// introdunction to string in c++
// int main(){
    
//      char  name[20];

//      cout << "Enter your name:"<<endl;
//      cin >> name;

//     cout<<"Your name is:";
//     cout<<name<<endl;
//      int len = getLength(name);
//     cout<< "Length:" << len << endl;
//     reverse(name,len);
//     cout << "Reverse is:" << name <<endl;

// return 0; 
//  }


 //valid palidrome

//  class Solution {
//     private: 
//     bool valid(char ch){
//         if((ch>='a' && ch <= 'z') || (ch>= 'A' && ch<= 'Z') || (ch>= '0' && ch<= '9') ){
//             return 1;
//         }
//         return 0;
//     }
//    char toLowerCase(char ch){
//     if((ch>='a' && ch <= 'z') || (ch>= '0' && ch<= '9')){
//         return ch;
//     }
//     else{
//         char temp = ch -'A' + 'a';  //change to lower case
//         return temp;
//     }
//    }
//    bool checkPalidrome(string a){
//     int s=0;
//     int e =a.length() -1;

//     while(s<=e){
//         if(a[s] != a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }

//     return 1;
//    }


// public:
//     bool isPalindrome(string s) {

//         //ignore unused character
//         string temp="";
//         for(int j =0;j<s.length();j++){
//             if(valid(s[j])){
//                 temp.push_back(s[j]);
//             }
//         }

//         //lower written
//         for(int j =0;j<temp.length();j++){
//             temp[j] = toLowerCase(temp[j]);
//         }
// // check Palidrome
//         return checkPalidrome(temp);
        
//     }
// };


//Reverse An aman in love to  nA nama ni evol

// int main(){
//     string name = "An man in love";
//     int n = name.length();
//     int start = 0;

//     for (int i = 0; i <= n; i++) {
//         if (i == n || name[i] == ' ') {
//             reverse(name, start, i);
//             start = i + 1;
//         }
//     }

//     cout << name << endl;
//     return 0;
// }

//Maximum occuring character in a string

// char getMaxOccCharacter(string s){
//     int arr[26] = {0};

//     //create an array of count of charcter
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         //lowercase
//         int number = 0;
//         if(ch>='a' && ch<= 'z'){
//             number = ch - 'a';
//         }
//         else{
//             //uppercase
//             number = ch - 'A';
//         }
//         arr[number]++;
//     }
//     int max1  =-1, ans=0;
//     for(int i=0;i<26;i++){
//         if(max1<arr[i]){
//             ans = i;
//             max1 = arr[i];
//         }
//     }
     
//     return 'a' + ans;
// }

// int main (){
//     string s;
//     cin>> s;
//     cout << getMaxOccCharacter(s)<<endl;
//     return 0;
// }

