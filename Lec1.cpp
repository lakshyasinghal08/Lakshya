#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//container with most water ==>> brute force approach O(n^2)
// int main(){
// vector<int> height = {1,8,6,2,5,4,8,3,7};
// int maxwater = 0;
// for(int i=0; i<height.size(); i++){
//     for(int j=i+1; j<height.size();j++){
//     int w = j - i;
//     int ht = min(height[i] , height[j]);
//     int currwater = w*ht;
//     maxwater = max(maxwater , currwater);
//     }
// }
// cout<<maxwater;
// return 0;
// }
// two poniter approach ==>> O(n)
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int maxwater = 0;
    int lp =0 , rp =height.size() - 1; ;
    while(lp < rp){
        int w = rp - lp;
        int ht = min(height[lp] , height [rp]);
        int currwater = w*ht;
        maxwater = max(maxwater , currwater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    cout<<maxwater;
    return 0;
}