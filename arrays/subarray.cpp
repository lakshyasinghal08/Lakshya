#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

    // int a[] = {1,2,3,-3,1,1,1,4,2,-3};
    // int n = sizeof(a)/sizeof(int);
    // int ke = 3;
    // int count = 0;
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

  // map<int,int>mpp;
  // mpp[0] = 1;
  // int prefix = 0;
  // for(int i=0; i<n ;i++){
  //   prefix += a[i];
  //   int remove = prefix - ke;
  //   count += mpp[remove];
  //   mpp[prefix] += 1;
  // }
  // cout<<"the total number of possible subarray of sum 3 is : "<<count<<" ";

   int main(){ 
    // int arr[] = {1,1,1,3,3,2,2,2};
    // int n = sizeof(arr)/sizeof(int);

    // vector<int> ans;
    // map<int,int>mpp;
    // int mini = (int)(n/3) + 1;

    // for(int i=0; i<n; i++){

    //     bool already = false;
    //     for(auto x: ans){
    //         if(x == arr[i]){
    //             already = true;
    //             break;
    //         }
    //     }
    //     if(already) continue;

    //     int count = 0;
    //     for(int j=0; j<n; j++){
    //         if(arr[j] == arr[i]){
    //             count++;
    //         }
    //     }

    //     if(count > n/3){
    //         ans.push_back(arr[i]);
    //     }
    // }

    // for(auto x: ans){
    //     cout<<x<<" ";
    // }


    // for(int i=0; i<n; i++){
    //   mpp[arr[i]]++;
    //   if(mpp[arr[i]] == mini){
    //     ans.push_back(arr[i]);
    //   }
    //   if(ans.size() == 2){
    //     break;
    //   }
    // }
    // for(auto x:ans){
    //   cout<<x<<" ";
    // }

    //  int arr[] = {1,1,1,3,3,2,2,2};
    // int n = sizeof(arr)/sizeof(int);

    // vector<int> ans;
    // int cnt1 =0 , cnt2 = 0;
    // int el1 = INT_MIN;
    // int el2 = INT_MIN;
    // for(int i=0; i<n; i++){
    //   if(cnt1 == 0 && el2 != arr[i]){
    //     cnt1 = 1;
    //     el2 = arr[i];
    //   }
    //   else if(cnt2 == 0 && el1 != arr[i]){
    //     cnt2 = 0;
    //     el1 = arr[i];
    //   }
    //   else if(arr[i] == el1) cnt1++;
    //   else if(arr[i] == el2) cnt2++;
    //   else{
    //     cnt1--;
    //     cnt2--;
    //   }
    // }
    // cnt1 = 0;
    // cnt2 = 0;
    // for(int i=0; i<n; i++){
    //   if(el1 == arr[i]) cnt1++;
    //   if(el2 == arr[i]) cnt2++;
    // }
    // int mini = (int)(n/3)+1;
    // if(cnt1 > mini){
    //   ans.push_back(arr[el1]);
    // }
    // if(cnt2 > mini){
    //   ans.push_back(arr[el2]);
    // }
    // sort(ans.begin() , ans.end());

    // for(auto x:ans)
    // {
    //   cout<<x<<" ";
    // }

    //""" Brute force solution  """
    // int arr[] = {1,1,1,3,3,2,2,2};
    // int n = sizeof(arr)/sizeof(int);
    // vector<int>ans;
    // for(int i=0; i<n; i++){
    //   bool already = false;
    //   for(auto x:ans){
    //      if(x == arr[i]){
    //       already = true;
    //       break;
    //      }
    //   }
    //   if(already) continue;
    //   int count = 0;
    //   for(int j=0; j<n; j++){
    //     if(arr[j] == arr[i]){
    //       count++;
    //     }
    //   }
    //   if(count > n/3){
    //     ans.push_back(arr[i]);
    //   }
    // }
    // for(auto x : ans){
    //   cout<<x<<" ";
    // }

   // """ Better Solution  """
//   int arr[] = {1,1,1,3,3,2,2,2};
//     int n = sizeof(arr)/sizeof(int);
//     vector<int>ans;
//     unordered_map<int , int>mpp;
//     int mini = (int)(n/3) + 1;
//     for(int i=0; i<n; i++){
//       mpp[arr[i]]++;
//       if(mpp[arr[i]] == mini){
//         ans.push_back(arr[i]);
//       }
//       if(ans.size() == 2){
//         break;
//       }
//     }
// for(auto x : ans){
//   cout<<x<<" ";
// }

int arr[] = {1,1,1,3,3,2,2,2};
    int n = sizeof(arr)/sizeof(int);
    vector<int>ans;
    int cnt1 = 0 , cnt2 = 0;
    int el1 = INT_MIN;
    int el2 = INT_MIN;
    for(int i=0; i<n; i++){
      if(cnt1 == 0 && arr[i] != el2){
        cnt1 = 1;
        el1 = arr[i];
      }
      else if(cnt2 == 0 && arr[i] != el1){
        cnt2 = 1;
        el2 = arr[i];
      }
      else if(arr[i] == el1) cnt1++;
      else if(arr[i] == el2) cnt2++;
      else{
        cnt1--;
        cnt2--;
      }
    }
      cnt1 = 0;
      cnt2 = 0;
      
    for(int i=0; i<n; i++){
      if(el1 == arr[i]) cnt1++;
      if(el2 == arr[i]) cnt2++;
    }
      if(cnt1 > n/3){
        ans.push_back(el1);
      }
       if(cnt2 > n/3){
        ans.push_back(el2);
      }
      sort(ans.begin() , ans.end());
    for(auto x : ans){
      cout<<x<<" ";
    }
    return 0;
}