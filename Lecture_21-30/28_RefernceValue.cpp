#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int &ref = a; // ref is a reference to a

    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Value of ref: " << ref << endl; // Output: 10

    ref = 20; // Changing the value of ref also changes a

    cout << "Value of a after changing ref: " << a << endl; // Output: 20
    cout << "Value of ref after changing ref: " << ref << endl; // Output: 20

    return 0;
}