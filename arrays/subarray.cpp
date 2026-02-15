#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    int a[] = {1,2,3,-3,1,1,1,4,2,-3};
    int n = sizeof(a)/sizeof(int);
    int ke = 3;
    int count = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         int sum = 0;
    //         for(int k=i; k<=j; k++){
    //             sum += a[k];
    //         }
    //         if(sum == ke){
    //             count++;
    //         }
    //     }
    // }
    // cout<<"the total number of possible subarray of sum 3 is : "<<count<<" ";

    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum += a[j];
    //         if(sum == ke){
    //         count++;
    //     }
    //     }
    // }
    // cout<<"the total number of possible subarray of sum 3 is : "<<count<<" ";

  map<int,int>mpp;
  mpp[0] = 1;
  int prefix = 0;
  for(int i=0; i<n ;i++){
    prefix += a[i];
    int remove = prefix - ke;
    count += mpp[remove];
    mpp[prefix] += 1;
  }
  cout<<"the total number of possible subarray of sum 3 is : "<<count<<" ";
    return 0;
}