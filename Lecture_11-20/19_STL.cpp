//Array in STL

// #include<iostream>
// #include<array>

// using namespace std;

// int main(){
//     int basic[3]={1,2,3};

//     array<int,4> a={1,2,3,4};

//     int size = a.size();

//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"Element at 2nd index: "<<a.at(2)<<endl;
//     cout<<"Empty or not: "<<a.empty()<<endl;

//     cout<<"First element: "<<a.front()<<endl;
//     cout<<"Last element: "<<a.back()<<endl;
// }

//Vector
// Vector is dynamic array //apna size bada ya ghata sakta hai..
// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int> v;
//     vector<int> a(5,1); //5 show size of vector and 1 show intialise all with 1.

//     vector<int> last(a);// copy of a element in last as vector

//     cout<<"Print last"<<endl;
//     for(int i:last){
//     cout<<i<< " ";
//     }
//     cout<<endl;

//     cout<<"Capacity ->" << v.capacity()<<endl;//Show whether value present

//     v.push_back(1); //add element in vector
//     cout<<"Capacity ->" << v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"Capacity ->" << v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"Capacity ->" << v.capacity()<<endl;

//     cout<<"size ->" << v.size()<<endl; //show the size of the array

//     cout<<"Element at 2nd index: "<<v.at(2)<<endl;

//   cout<<"First element: "<<v.front()<<endl;
//   cout<<"Last element: "<<v.back()<<endl;

//   cout<<"Before pop"<<endl;
//   for(int i:v){
//     cout<<i<< " ";
//   }
//   cout<<endl;

//   v.pop_back();//remove last element

//   cout<<"After pop"<<endl;
//   for(int i:v){
//     cout<<i<< " "<<endl;
//   }
//   cout<<"Before clear size "<<v.size()<<endl;
//   v.clear(); //clear the all element
//   cout<<"After clear size "<<v.size()<<endl;
//   cout<<endl; 
// }

//deque

 //#include<iostream>
// #include<deque>

// using namespace std;

// int main(){
//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);

//     for (int i :d)
//     {
//         cout<<i<<" ";
//     }

//     // d.pop_front();
//     cout<<endl;

//     // for (int i :d)
//     // {
//     //     cout<<i<<" ";
//     // }

//     cout<<"Print the first index element=->"<<d.at(1)<<endl;

//     cout<<"Empty or not: "<<d.empty()<<endl;

//     cout<<"First element: "<<d.front()<<endl;
//     cout<<"Last element: "<<d.back()<<endl;

//     cout<<"Before erase "<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1); //have to give for erase
//     cout<<"After erase "<<d.size()<<endl;
// }

//list

// #include<iostream>
// #include<list> //list libraray

// using namespace std;
// int main(){
//     list<int> l;

//     list<int> n(5,100); //print every element 100 value
//     cout<<"Printing n"<<endl;
//     for (int i :n)
//    {
//     cout<<i<<" ";
//    }
//    cout<<endl;

//     l.push_back(1);
//     l.push_front(2);

//     for (int i:l)
//    {
//     cout<<i<<" ";
//    }
//    cout<<endl;

//    l.erase(l.begin()); //easre from begining
//    cout<<"After erase"<<endl;
//    for (int i:l)
//    {
//     cout<<i<<" ";
//    }
//    cout<<endl;

//    cout<<"Size of list"<<l.size()<<endl;

// }

//Stack  lat come first out

// #include<iostream>
// #include<stack>

// using namespace std;
// int main(){
//     stack<string> s;

//     s.push("I");
//     s.push("Love");
//     s.push("You");

//     cout<<"Top element->"<<s.top()<<endl;
//     s.pop();
//     cout<<"Top element->"<<s.top()<<endl;

//     cout<<"size of stack->"<<s.size()<<endl;

//     cout<<"Empty or not->"<<s.empty()<<endl;
// }

//Priority Queue

// #include<iostream>
// #include<queue>

// using namespace std;
// int main(){
//     //max heap
//     priority_queue<int> maxi;

//     //min heap
//     priority_queue<int,vector<int>,greater<int> > mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     cout<<"size->"<<maxi.size()<<endl;

//     int n = maxi.size();

//     for(int i = 0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//     cout<<endl;

//     mini.push(1);
//     mini.push(3);
//     mini.push(2);
//     mini.push(0);

//     cout<<"size->"<<mini.size()<<endl;

//     int m = mini.size();

//     for(int i = 0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
//     cout<<endl;

//     cout<<"Empty or not "<<mini.empty()<<endl;
// }

//Set store unique numberr

// #include<iostream>
// #include<set>

// using namespace std;
// int main(){
//     set<int> s;

//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(6);
//     s.insert(7);
//     s.insert(0);
//     s.insert(5);
//     s.insert(6);
//     s.insert(0);
//     s.insert(0);
//     s.insert(5);

//     for(auto i : s){
//         cout<<i<<endl;
//     }
//     cout<<endl;

//     set<int>:: iterator it = s.begin();
//     it++;

//     s.erase(it);

//     for(auto i : s){
//         cout<<i<<endl;
//     }
//     cout<<endl;

//     cout<<"-5 is present or not ->"<<s.count(-5)<<endl;

//     set<int>:: iterator itr = s.find(5);
//     for(auto it=itr; it!=s.end();it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }

//Map

// #include<iostream>
// #include<map>

// using namespace std;
// int main(){
//     map<int,string> m;

//     m[1]="Babber";
//     m[2]="Love";
//     m[13]="Kumar";
    
//     m.insert({5,"Bheem"});

//     cout<<"Before erase"<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<"finding -13-->"<<m.count(-13)<<endl;

//     //m.erase(13);
//     cout<<"after erase"<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<endl<<endl;

//     auto it = m.find(5);

//     for(auto i=it; i!=m.end();i++){
//         cout<<(*i).first<<endl;

//     }
// }

//Algoritmn

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;


    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // cout<<"Find 6 "<<binary_search(v.begin(),v.end(),6)<<endl;

    // cout<<"lower bound " <<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    // cout<<"upper bound " <<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    // int a=3;
    // int b=5;

    // cout<<"Max ->"<<max(a,b)<<endl;
    // cout<<"Min ->"<<min(a,b)<<endl;

    // swap(a,b);
    // cout<<endl<<"a-> "<<a<<endl;

    // string abcd = "abcd";
    // reverse(abcd.begin(),abcd.end());
    // cout<<"string-> "<< abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate" << endl;
    for(int i:v){
        cout<<i<<" ";
    }
   
}