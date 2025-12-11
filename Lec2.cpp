#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//product of array except self ==>> brute force approach O(n^2)
// int main(){
//     vector<int>nums = {1,2,3,4};
//     int n = nums.size();
//     vector<int>ans(n,1);

//     for(int i=0; i<nums.size(); i++){
//         for(int j=0; j<n; j++){
//         if(i != j){
//         ans[i] *= nums[j];
//         }
//     }
//     }
//     for(int x : ans){
//      cout<<x<<" "<<endl;
//     }
//     return 0;
// }

//optimal approach ==>> O(n)
// int main(){
//     vector<int>nums = {1,2,3,4};
//     int n = nums.size();
//     vector<int>ans(n,1);
//     vector<int>prefix(n,1);
//     vector<int>suffix(n,1);

//     for(int i=1; i<n; i++){
//         prefix[i] = prefix[i-1] * nums[i-1];
//     }
//     for(int i=n-2; i>=0; i--){
//         suffix[i] = suffix[i+1] * nums[i+1];
//     }
//     for(int i=0; i<n; i++){
//         ans[i] = prefix[i] * suffix[i];
//     }
//     for(int x : ans){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// due to the space complexity in above is O(n) and now is O(1)
int main(){
    vector<int>nums ={1,2,3,4};
    int n = nums.size();
    vector<int>ans(n,1);
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}