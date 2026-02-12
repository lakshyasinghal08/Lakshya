#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    // int a[] = {102,4,100,1,101,3,2,1,1,5};
    // int n = sizeof(a)/sizeof(int);
    // int longest = 1;
    // for(int i=0; i<n; i++){
    //     int x = a[i];
    //     int count = 1;

    //     while(true){
    //         bool found = false;

    //         for(int j=0; j<n; j++){
    //             if(a[j] == x+1){
    //                 found = true;
    //                 break;
    //             }
    //         }
    //     if(found){
    //         x = x+1;
    //         count += 1;
    //     }
    //     else{
    //         break;
    //     }
    // }
    //     if(count > longest){
    //         longest = count;
    //     }
    // }
    // cout<<"longest consecutive sequence brute force solution = "<<longest<<" ";
    

        int a[] = {102,4,100,1,101,3,2,1,1,5};
    int n = sizeof(a)/sizeof(int);

    // sort(a,a+n);
    // int longest = 1;
    // int count  = 1;
    // int lastsmaller = INT_MIN;
    // for(int i=0; i<n; i++){
    //     if(a[i]- 1 == lastsmaller){
    //         count++;
    //         lastsmaller = a[i];
    //     }
    //     else if(a[i] != lastsmaller){
    //       count = 1;
    //       lastsmaller = a[i];
    //     }
    //     longest = max(longest , count);
    // }
    // cout<<"longest consecutive sequence better solution = "<<longest<<" ";

    unordered_set<int>s;
    int longest = 1;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
  for(auto i : s){
    if(s.find(i-1) == s.end()){
    int count  = 1;
    int x = i;
    while(s.find(x+1) != s.end()){
        x = x+1;
        count += 1;
    }
    longest = max(longest , count);
    }
  }
  cout<<"longest consecutive sequence optimal solution = "<<longest<<" ";
    return 0;
}