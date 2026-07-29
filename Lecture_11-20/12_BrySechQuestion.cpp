#include<iostream>
#include<math.h>
using namespace std;

//Binary to Number 
int B_to_N(int n) {
    int num = 0;
    int sum = 0;
    int power_of_2 = 1; // 2^0

    while (n != 0) {
        int digit = n % 10;      // get last digit (0 or 1)
        sum += digit * power_of_2;
        power_of_2 <<= 1;        // multiply by 2: 2^k -> 2^(k+1)
        n /= 10;
    }

    return sum;
}

//Number to Binary

int N_to_B(int n) {
    int binary = 0;
    int place = 1; // 1, 10, 100, ...

    if (n == 0) return 0;

    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }

    return binary;
}


int main(){
cout<<N_to_B(4);
}