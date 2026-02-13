#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main() {

    // cout << "Program started\n";

    // int arr[4][4] = {
    //     {1,1,1,1},
    //     {1,0,1,1},
    //     {1,1,0,1},
    //     {0,1,1,1}
    // };

    // int n = 4, m = 4;

    // vector<int> row(n,0), col(m,0);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]==0){
    //             row[i]=1;
    //             col[j]=1;
    //         }
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(row[i] || col[j])
    //             arr[i][j]=0;
    //     }
    // }

    // cout << "Matrix:\n";

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr[4][4] = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 1}
    };

    int n = 4, m = 4;
    int col0 = 1;   // tracks first column separately

    // Step 1: mark rows and columns
    for(int i = 0; i < n; i++){
        if(arr[i][0] == 0) col0 = 0;

        for(int j = 1; j < m; j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    // Step 2: fill zeros from back
    for(int i = n-1; i >= 0; i--){
        for(int j = m-1; j >= 1; j--){
            if(arr[i][0] == 0 || arr[0][j] == 0){
                arr[i][j] = 0;
            }
        }
        if(col0 == 0) arr[i][0] = 0;
    }

    // Print matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
