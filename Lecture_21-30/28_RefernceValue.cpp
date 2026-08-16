#include<iostream>
using namespace std;

// void update1(int &n){
//     n++; // This will change the original value of n in main
// }

// void update(int n){
//     n++; // This will not change the original value of n in main
// }

int main()
{
    // int a = 10;
    // int &ref = a; // ref is a reference to a

    // cout << "Value of a: " << a << endl; // Output: 10
    // cout << "Value of ref: " << ref << endl; // Output: 10

    // ref = 20; // Changing the value of ref also changes a

    // cout << "Value of a after changing ref: " << a << endl; // Output: 20
    // cout << "Value of ref after changing ref: " << ref << endl; // Output: 20

    // int a = 10;
    // cout << "Value of a before update1: " << a << endl;
    // update1(a); // Passing a by reference
    // cout << "Value of a after update1: " << a << endl; // Output

  char ch = 'A';
  cout<< sizeof(ch)<<endl; // 1 byte
  char *c = &ch;
  cout<< sizeof(c)<<endl; // 8 bytes (on a 64-bit system)

    return 0;
}