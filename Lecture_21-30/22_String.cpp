#include<iostream>
using namespace std;

//find the length of string
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
 }
 //Reverse a string...
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<e){
swap(name[s++],name[e--]);
    }
    
    
}


int main(){
    
     char  name[20];

     cout << "Enter your name:"<<endl;
     cin >> name;

    cout<<"Your name is:";
    cout<<name<<endl;
     int len = getLength(name);
    cout<< "Length:" << len << endl;
    reverse(name,len);
    cout << "Reverse is:" << name <<endl;

return 0; 
 }

