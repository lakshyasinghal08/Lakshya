#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    // int a[] = {7,1,5,3,6,4};
    // int n = sizeof(a)/sizeof(int);

    // int  mini = a[0];
    // int profit = 0;
    // for(int i=0; i<n; i++){
    //     int cost = a[i]-mini;
    //     profit = max(profit , cost);
    //     mini = min(mini , a[i]);
    // }
    // cout<<"the maximun profit = "<<profit<<" ";

//     int a[] = {2,1,5,4,3,0,0};
//     int n = sizeof(a)/sizeof(int);
//     int index = -1;
//     for(int i=n-2;i>=0; i--){
//         if(a[i] < a[i+1]){
//            index = i;
//            break;
//         }
//     }
//     if(index == -1){
//         reverse(a,a+n);
//     }
//     else{
//     for(int i=n-1;i>index;i--){
//         if(a[i] > a[index]){
//             swap(a[i],a[index]);
//             break;
//         }
//     }
// reverse(a + index+1 , a+n);
// }
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }

int a[] = {10,12,22,12,0,3,6};
int n = sizeof(a)/sizeof(int);
vector<int>ans;
int maxi = INT_MIN;
// for(int i=0; i<n;i++){
//     bool leader = true;
//     for(int j=i+1;j<n;j++){
//         if(a[j] > a[i]){
//             leader = false;
//             break;
//         }
//     }
//     if(leader == true){
//         ans.push_back(a[i]);
//     }
// }
// for(auto x : ans){
//     cout<<x<<" ";
// }
for(int i=n-1;i>=0;i--){
    if(a[i] > maxi){
        ans.push_back(a[i]);
    }
    maxi = max(maxi , a[i]);
}
sort(ans.begin() , ans.end());
for(auto x:ans){
    cout<<x<<" ";
}

    return 0;
}