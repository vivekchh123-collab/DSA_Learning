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
cout<<"Enter the number";
cin>>n;

int i = 1;
int j = 1;
while (i<=n)
{
while (j<=n)
{
    cout<<j<<" ";
    j++;
}
cout<<endl;
i++;
}




}