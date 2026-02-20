#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
vector<vector<int>> a = {
        {1,3},
        {2,6},
        {8,9},
        {9,11},
        {8,10},
        {2,4},
        {15,18},
        {16,17}
    };

    sort(a.begin(), a.end());

    vector<vector<int>> ans;

    for(int i=0;i<a.size();i++){
        if(ans.empty() || a[i][0] > ans.back()[1]){
            ans.push_back(a[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1], a[i][1]);
        }
    }

    for(auto &x: ans){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
    return 0;
}