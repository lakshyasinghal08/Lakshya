#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    //""" x-or of the duplicate element in an array """
//    int a[] = {1,2,3,4,5,6,7 ,8 ,4};
//    int N = sizeof(a)/sizeof(int);
//     int xor1 = 0 , xor2 = 0;
//     for(int i=0;i<N;i++){
//         xor1 ^= (i+1); 
//         xor2 ^= a[i]; 
//     }
//     cout<<(xor1 ^ xor2);
// int a[] = {1,1,0,1,1,1,0,1,1};
// int n = sizeof(a)/sizeof(int);
// int maxi = 0;
// int count = 0;
// for(int i=0; i<n; i++){
// if(a[i]==1){
//     count++;
//     maxi = max(maxi , count);
// }
// else{
//     count = 0;
// }
// }
// cout<<"max = "<<maxi<<endl<<"count = "<<count<<endl;

// int a[] = {1,1,0,1,1,1,0,1,2,2,3,3,4};
// int n = sizeof(a)/sizeof(int);
// int len = 0;
// for(int i=0; i<n; i++){
//     int count = 0;
//     for(int j=0; j<n;j++){
//         if(a[i] == a[j]){
//             count++;
//         }
//     }
//     if(count == 1){
//         cout<<"element appears once : "<<a[i]<<" ";
//     }
// }

//""" optimal solution """
// int xor1 = 0;
// for(int i=0; i<n; i++){
//     xor1 = xor1^a[i];
// }
// cout<<"xor = "<<xor1<<endl;

// for(int i=0; i<n; i++){
//     for(int j=i; j<n; j++){
//        int s = 0;
//         for(int k=i; k<=j; k++){
//             s +=a[k];
//             if(s == 0){
//                 len = max(len ,j-i+1 );
//             }
//         }
//         cout<<s<< " ";
//     }
// }
// cout<<"length = "<<len;
// for(int i=0;i<n; i++){
//     int s = 0;
//     for(int j=0;j<n; j++){
//         s =a[j];
//     }
//     cout<<s<<" ";
// }

int a[] = {1,1,0,1,1,1,0,1,2,2,3,3,4};
int n = sizeof(a)/sizeof(int);
int len = 0;
long long k = 3;
long long sum = a[0];
int left = 0;
int right = 0;
int maxlen = 0;
while(right < n){
    while(left <= right && sum > k){
        sum -= a[left];
        left++;
    }
    if(sum == k){
        maxlen = max(maxlen , right - left + 1);
    }
    right++;
    if(right < n) sum += a[right];
}
//""" optimal solution of the len of the subarray k"""
cout<<"maxlen = "<<maxlen<<" ";
    return 0;
}