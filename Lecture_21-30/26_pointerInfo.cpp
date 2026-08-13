#include<iostream>
using namespace std;

int main () {

    int arr[10] = {2,5,4};

    // cout <<" address of first memory block is " << arr << endl;
    // cout << arr[0] << endl;
    // cout <<" address of first memory block is " << &arr[0] << endl;

    // cout<< "value of indexx"<< *arr << endl;
    // cout<< "increase one by at zeroth location:"<< *arr +1 << endl;
    // cout<< "value of index 1:"<< *(arr+1) << endl;

    // int i=2;
    // cout<< i[arr] << endl;

    int temp[10];
    cout<< sizeof(temp) << endl;
    cout<< sizeof(*temp) << endl;
    cout<< sizeof(&temp) << endl;

    int *ptr = &temp[10];
    cout<< sizeof(ptr) << endl;
    cout <<sizeof(*ptr) << endl;
    cout <<sizeof(&ptr) << endl;





   return 0;
}