#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    // int a[] = {-1,0,1,2,-1,-4};
    // int n = sizeof(a)/sizeof(int);
    // set<vector<int>>st;
    // for(int i=0; i<n;i++){
    //     for(int j=i+1; j<n; j++){
    //         for(int k=j+1; k<n; k++){
    //            if(a[i] + a[j] + a[k] == 0){
    //             vector<int>temp = {a[i] , a[j] , a[k]};
    //             sort(temp.begin() , temp.end());
    //             st.insert(temp);
    //            }
    //         }
    //     }
    // }
    // vector<vector<int>>ans(st.begin() , st.end());
    // for(auto x : ans){
    //    for (auto val : x){
    //     cout<<val<<" ";
    //    }
    //    cout<<endl;
    // }
    
    //  int a[] = {-1,0,1,2,-1,-4};
    // int n = sizeof(a)/sizeof(int);
    // set<vector<int>>st;
    // for(int i=0; i<n; i++){
    //    set<int>hashest;
    //     for(int j=i+1; j<n; j++){
    //         int third = -(a[i] + a[j]);
    //         if(hashest.find(third) != hashest.end()){
    //             vector<int>temp = {a[i] , a[j] , third};
    //             sort(temp.begin() , temp.end());
    //             st.insert(temp);
    //         }
    //         hashest.insert(a[j]);
    //     }
    // }
    // vector<vector<int>>ans(st.begin() , st.end());
    // for(auto x: ans){
    //     for(auto val : x){
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }

    int a[] = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    int n = sizeof(a)/sizeof(int);
    vector<vector<int>>ans;
    sort(a , a+n);
    for(int i=0; i<n; i++){
    if(i>0 && a[i] == a[i-1]) continue;
    int j = i+1;
    int k = n-1;
    while(j<k){
        int sum = a[i] + a[j] + a[k];
        if(sum < 0){
            j++;
        }
        else if(sum >0 ){
            k--;
        }
        else{
            vector<int>temp = {a[i] , a[j] , a[k]};
            ans.push_back(temp);
            j++;
            k--;
       while(j<k && a[j] == a[j-1]) j++;
       while(j<k && a[k] == a[k+1]) k--;
    }
    }
    }
    for(auto x:ans){
        for(auto val:x){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}