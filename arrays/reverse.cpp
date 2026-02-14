#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
//"""Rotate matrix by 90 degree"""

    // int a[4][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };
    // int n = 4;
    // int ans[n][n];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         ans[j][n-1-i] = a[i][j];
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // """ Optimal approach """
   
    //     int a[4][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };
    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         swap(a[i][j] , a[j][i]);
    //     }
    // }
    // for(int i=0; i<n;i++){
    //     reverse(a[i] , a[i] + n);
    // }
    //    for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //""" Optimal approach of the spiral traversal of a matrix """
    int a[6][6] = {
        {1,2,3,4,5,6},
        {20,21,22,23,24,7},
        {19,32,33,34,25,8},
        {18,31,36,35,26,9},
        {17,30,29,28,27,10},
        {16,15,14,13,12,11}
    };
    int n = 6;
    int left = 0;
    int top = 0;
    int right = n-1;
    int bottom = n-1;
    vector<int>ans;
    while(top <= bottom && left <= right){
        for(int i=left;i<=right; i++){
           ans.push_back(a[top][i]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            ans.push_back(a[i][right]);
        }
        right--;
        if(top <= bottom){
           for(int i=right; i>=left; i--){
            ans.push_back(a[bottom][i]);
           }
           bottom--;
        }
        if(left <= right){
            for(int i=bottom; i>=top;i--){
                ans.push_back(a[i][top]);
            }
            left++;
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}