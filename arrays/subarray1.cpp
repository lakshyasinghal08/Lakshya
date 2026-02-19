#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    // int a[] = {4,2,2,6,4};
    // int n = sizeof(a)/sizeof(int);
    // int count = 0;
    // int target = 6;
    // for(int i=0; i<n; i++){
    //     for(int j=i ; j<n; j++){
    //         int xorr = 0;
    //          for(int k=i; k<=j; k++){
    //             xorr = xorr^a[k];
    //          }
    //             if(xorr == target){
    //                 count++;
    //             }
    //     }
    // }
    // cout<<"possible number of xor subarrays of count 6 = "<<count<<" "<<endl;

//     int a[] = {4,2,2,6,4};
//     int n = sizeof(a)/sizeof(int);
//     int count = 0;
//     int target = 6;
//     for(int i=0; i<n; i++){
//         int xorr =0;
//         for(int j=i; j<n; j++){
//             xorr = xorr ^ a[j];
//             if(xorr == target){
//                 count++;
//             }
//         }
//     }
// cout<<"possible number of xor subarrays of count 6 = "<<count<<" "<<endl;

    int a[] = {4,2,2,6,4};
    int n = sizeof(a)/sizeof(int);
    unordered_map<int,int>mpp;
    int xr = 0;
    mpp[xr]++;
    int k = 6;
    int count = 0;
    for(int i=0; i<n; i++){
        xr = xr ^ a[i];
    int x = xr^k;
    count += mpp[x];
    mpp[xr]++;
    }
    cout<<"count of maximum subarray = "<<count<<" "<<endl;
    return 0;
}