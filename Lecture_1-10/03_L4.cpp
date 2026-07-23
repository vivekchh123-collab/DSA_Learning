#include<iostream>
using namespace std;

int main (){
//1).
// int n;
// cin>>n;

// int i=1;
// while (i<=n)
// {
// int j =1;
// while (j<=n)
// {
//     cout<<j;
//     j++;
// }
// cout<<endl;
// i++;
// }

//2).
int n;
cout<<"Enter the number:"<<endl;
cin>>n;

int i=1;
while(i<=9){
    int j=1;
    while(j<=n){
        cout<<i<<" ";
        j++;
        i++;
    }
    cout<<endl;
    
}
}