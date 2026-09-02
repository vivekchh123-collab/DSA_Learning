// #include<iostream>
// using namespace std;

// int factorial(int n) {

//     //base case
//     if(n == 0)
//         return 1;

//     return n * factorial(n-1);
// }

// int main() {

//     int n;
//     cin >> n;

//     int ans = factorial(n);

//     cout << ans << endl;

//     return 0;
// }

//Power of a number using recursion
// #include<iostream>
// using namespace std;

// int power(int n) {

//     //base case
//     if(n == 0)
//         return 1;

//     //recursive relation
//     return 2 * power(n-1);
// }

// int main() {

//     int n;
//     cin >> n;

//     int ans = power(n);

//     cout << ans << endl;

//     return 0;
// }

//number

// #include<iostream>
// using namespace std;

// void print(int n) {
//     //base case
//     if(n == 0) {
//         return ;
//     }

//     cout << n << endl;

//     //Recursive relation
//     print(n-1);

// }

// int main() {

//     int n;
//     cin >> n;
//     cout << endl;
//     print(n);

//     return 0;
// }
//out put = 5 4 3 2 1 

// 
#include<iostream>
using namespace std;

void print(int n) {
    //base case
    if(n == 0) {
        return ;
    }

    //Recursive relation
    print(n-1);

    cout << n << endl;
}

int main() {

    int n;
    cin >> n;
    cout << endl;
    print(n);

    return 0;
} 

// output = 1 2 3 4 5