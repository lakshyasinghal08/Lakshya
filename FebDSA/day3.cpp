#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void explainpair(){
// pair<int , int>p = {1,3};
// cout<<"first  = "<< p.first << " second = "<<p.second<<endl;
// pair<int , pair<int,int>>a={1,{3,4}};
// cout<<"first = "<<a.first<<"second--first = "<<a.second.first<<"second--second = "<<a.second.second<<endl;
// pair<int,int>arr[] = {{1,2},{3,4},{5,6}};
// cout<<arr[1].second<<endl;
// cout<<arr[2].first<<endl;

// vector<int>v;
// v.push_back(1);
// v.emplace_back(2);
// for(int x:v){
//     cout<<x<<" ";
// }
// vector<pair<int,int>>c;
// c.push_back({1,2});
// c.emplace_back(1,2);
// for (auto x : c){
//     cout<<x.first<<" "<<x.second<<endl;
// }
// vector<int>b(5,100);
// for(auto f : b){
//     cout<<f<<" "<<endl;
// }
vector<int>v(5);
vector<int>v1(5,20);
vector<int>v2(v1);
for(auto a : v){
    cout<<"a = "<<a<<" "<<endl;
}
for(auto b: v1){
    cout<<"v1 = "<<b<<" "<<endl;
}
for(auto c : v2){
    cout<<"v2 = "<<c<<" "<<endl;
}
}
int main(){
    explainpair();
    return 0;
}