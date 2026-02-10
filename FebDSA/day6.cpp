#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    // int a[] = {-2,-3,4,-1,-2,1,5,-3};
    // int a[] = {3,1,-2,-5,2,-4};
    // int n = sizeof(a)/sizeof(int);
    // int maxi = LONG_MIN;
    // for(int i=0; i<n;i++){
    //     for(int j=i; j<n; j++){
    //         int sum = 0;
    //         for(int k=i;k<j;k++){
    //             sum +=a[k];
    //         }
    //         maxi = max(maxi , sum);
    //     }
    // }
    //     cout<<"maximum subarray sum is : "<<maxi<<" ";
    
    // for(int i=0; i<n;i++){
    //     int sum = 0;
    //     for(int j=i;j<n;j++){
    //         sum += a[j];
    //         maxi = max(maxi , sum);
    //     }
    // }
    //   cout<<"maximum subarray sum is : "<<maxi<<" ";
//    int sum  = 0;
//    int ansstart ;
//    int ansend = 0;
//    for(int i=0; i<n; i++){
//         sum += a[i];
//         ansstart = 
//         maxi = max(maxi , sum);
    
//     if(sum < 0){
//         sum = 0;
//     }
//    }
//    cout<<"maximum subarray sum = "<<maxi<<" ";

// vector<int>pos;
// vector<int>neg;
// for(int i=0; i<n;i++){
//     if(a[i]>=0){
//         pos.push_back(a[i]);
//     }
//     else{
//         neg.push_back(a[i]);
//     }
// }
// // TC = O(2n) and SC = O(n)
// for(int i=0; i<n/2; i++){
//     a[2*i] = pos[i];
//     a[2*i+1] = neg[i];
// }
// for(int i=0;i<n; i++){
// cout<<a[i]<<" ";
// }


// TC = O(n) and SC = O(n)
// vector<int>ans(n,0);
// int negindex = 1;
// int posindex = 0;
// for(int i=0; i<n; i++){
//     if(a[i] < 0){
//         ans[negindex] = a[i];
//         negindex += 2;
//     }
//     else{
//         ans[posindex] = a[i];
//         posindex += 2;
//     }
// }
// for(int i=0; i<n; i++){
//     cout<<ans[i]<<" ";
// }

// int a[] = {3,1,-2,-5,2,8,9,10-4};
//     int n = sizeof(a)/sizeof(int);
//     int maxi = LONG_MIN;

//     vector<int>pos,neg;
//     for(int i=0; i<n; i++){
//         if(a[i] > 0){
//             pos.push_back(a[i]);
//         }
//         else{
//             neg.push_back(a[i]);
//         }
//     }
//     if(pos.size() > neg.size()){
//         for(int i=0; i<neg.size();i++){
//             a[2*i] = pos[i];
//             a[2*i+1] = neg[i];
//         }
//         int index = neg.size() * 2;
//         for(int i=neg.size();i<pos.size(); i++){
//             a[index] = pos[i];
//             index++;
//         }
//     }
//     else{
//         for(int i=0; i<pos.size();i++){
//             a[2*i] = pos[i];
//             a[2*i+1] = neg[i];
//         }
//         int index = pos.size() * 2;
//         for(int i=pos.size();i<neg.size(); i++){
//             a[index] = neg[i];
//             index++;
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<a[i] << " ";
//     }

// int b[] = {-2,-3,4,-1,-2,1,5,-3};
// int n = sizeof(b)/sizeof(int);
// int maxi = LONG_MIN;
// for(int i=0; i<n; i++){
//     for(int j=i; j<n; j++){
//         int sum = 0;
//         for(int k=i; k<=j; k++){
//             sum += b[k];
//         }
//         maxi = max(maxi,sum);
//     }
// }
// cout<<"maximum subarray is : "<<maxi<<" ";

// for(int i=0; i<n; i++){
//     int sum = 0;
//     for(int j=i; j<n; j++){
//         sum +=b[j];
//         maxi = max(maxi,sum);
//     }
// }
// cout<<"maxi = "<<maxi<<" ";

// int sum = 0;
// for(int i=0; i<n; i++){
//     sum += b[i];
//     maxi = max(maxi,sum);

//     if(sum < 0){
//         sum = 0;
//     }
// }
// cout<<"maximum subarray sum = "<<maxi<<" ";

// int c[] = {10,-1,4,-2,-5,9,7,-6};
// int n = sizeof(c)/sizeof(int);
// vector<int>pos;
// vector<int>neg;
// vector<int>ans(n,0);
// for(int i=0; i<n; i++){
//     if(c[i] > 0){
//         pos.push_back(c[i]);
//     }
//     else{
//         neg.push_back(c[i]);
//     }}

//     for(int i=0 ;i<n/2; i++){
//         c[2*i] = pos[i];
//         c[2*i+1] = neg[i];
//     }
//      for(int i=0 ;i<n/2; i++){
//         c[2*i] = neg[i];
//         c[2*i+1] = pos[i];
//     }
// for(int i=0; i<n ;i++){
//     cout<<c[i] <<" ";
// }

// int positiveindex = 0;
// int negativeindex = 1;
// for(int i=0; i<n; i++){
//     if(c[i] < 0){
//         ans[negativeindex] = c[i];
//         negativeindex += 2;
//     }
//     else{
//         ans[positiveindex] = c[i];
//     positiveindex += 2;
//     }
// }
// for(int i=0; i<n; i++){
// cout<<ans[i]<<" ";
// }

int c[] = {10,-1,4,-2,-5,9,7,67,45,23,13-6};
int n = sizeof(c)/sizeof(int);
vector<int>pos;
vector<int>neg;

for(int i=0; i<n; i++){
    if(c[i] > 0){
        pos.push_back(c[i]);
    }
    else{
        neg.push_back(c[i]);
    }
}
if(pos.size() > neg.size()){
    for(int i=0; i<neg.size();i++){
        c[2*i] = pos[i];
        c[2*i+1] = neg[i];
    }
    int index = neg.size()*2;
    for(int i=neg.size();i<pos.size();i++){
        index = pos[i];
        index++;
    }
}
else{
     for(int i=0; i<pos.size();i++){
        c[2*i] = pos[i];
        c[2*i+1] = neg[i];
    }
    int index = pos.size()*2;
    for(int i=pos.size();i<neg.size();i++){
        index = neg[i];
        index++;
    }
}
for(int i=0;i<n;i++){
    cout<<c[i]<<" ";
}
    return 0;
}