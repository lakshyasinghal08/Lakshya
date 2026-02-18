#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    // int a[] = {1,0,-1,0,-2,2};
    // int n = sizeof(a)/sizeof(int);
    // int target = 0;
    // set<vector<int>>st;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         for(int k=j+1; k<n; k++){
    //             for(int l=k+1; l<n; l++){
    //                 long long sum = a[i] + a[j];
    //                 sum += a[k];
    //                 sum += a[l];
    //                 if(sum == target){
    //                     vector<int>temp = {a[i],a[j],a[k],a[l]};
    //                     sort(temp.begin() , temp.end());
    //                     st.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>>ans(st.begin() , st.end());
    // for(auto x: ans){
    //     for(auto val : x){
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }

    // int a[] = {1,0,-1,0,-2,2};
    // int n = sizeof(a)/sizeof(int);
    // int target = 0;
    // set<vector<int>>st;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         set<long long>hashest;
    //         for(int k=j+1; k<n; k++){
    //            long long sum = a[i] + a[j] + a[k];
    //            long long fourth = target - (sum);
    //            if(hashest.find(fourth) != hashest.end()){
    //             vector<int>temp = {a[i] , a[j] , a[k] ,(int)fourth};
    //             sort(temp.begin() , temp.end());
    //             st.insert(temp);
    //            }
    //            hashest.insert(a[k]);
    //         }
    //     }
    // }
    // vector<vector<int>>ans(st.begin() , st.end());
    // for(auto x: ans){
    //     for(auto val : x){
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }

    int a[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    int n = sizeof(a)/sizeof(int);
    sort(a,a+n);
    int target = 8;
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        if(i>0 && a[i] == a[i-1]) continue;
        for(int j=i+1; j<n ;j++){
            if(j != i+1 && a[j] == a[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k <l ){
                long long sum = a[i];
                sum += a[j];
                sum += a[k];
                sum += a[l];
                if(sum == target){
                    vector<int>temp = {a[i] ,a[j] , a[k] , a[l]};
                    ans.push_back(temp);
                    k++ , l--;
                    while(k<l && a[k] == a[k-1]) k++;
                    while(k<l && a[l] == a[k+1]) l--;
                }
                else if(sum < target){
                    k++;
                }
                else{
                    l--;
                }
            }
        }
    }
    for(auto x:ans){
        for(auto val : x){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}