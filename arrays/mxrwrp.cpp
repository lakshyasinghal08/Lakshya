#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

void merge(long long a1[] , long long a2[] , int n , int m ){
long long arr3[n+m];
int left = 0;
int right = 0;
int index= 0;
while(left <n && right<m){
    if(a1[left] <= a2[right]){
        arr3[index] = a1[left];
        left++;
        index++;
    }
    else{
        arr3[index] = a2[right];
        right++ , index++;
    }
}
    while(left < n){
        arr3[index++] = a1[left++];
    }
    while(right < m){
        arr3[index++] = a2[right++];
    }
     for(int i=0;i<n;i++){
        a1[i] = arr3[i];
    }

    for(int i=0;i<m;i++){
        a2[i] = arr3[n+i];
    }
} 
void merger(long long arr1[] , long long arr2[] , int n , int m ){
    int left = n-1;
    int right = 0;
    while(left > 0 && right < m){
        if(arr1[left] >= arr2[right]){
            swap(arr1[left] , arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}
void swapifgreater(long long arr1[] , long long arr2[] , int ind1 , int ind2){
    if(arr1[ind1] >= arr2[ind2]){
        swap(arr1[ind1] , arr2[ind2]);
    }
}
void merger_optimal(long long arr1[] , long long arr2[] , int n , int m ){
int len = (n+m);
int gap = (len/2)+(len%2);
while(gap > 0){
    int left = 0;
    int right = left + gap;
    while(right < len){
        if(left <n && right >=n){
        swapifgreater(arr1 , arr2, left , right-n);
    }
    else if(left >= n){
        swapifgreater(arr2 , arr2, left-n , right-n);
    }
    else{
        swapifgreater(arr1 , arr1, left , right);
    }
    left++ , right++;
}
if(gap == 1) break;
gap = (gap/2)+(gap%2);
}

}

int main(){
 long long a1[] = {1,3,5,7};
 long long  a2[] = {0,2,6,8,9};
 int n = 4;
 int m = 5;
 merger_optimal(a1,a2,n,m);
 for(int i=0; i<n; i++){
    cout<<a1[i]<<" ";
 }
 cout<<endl;
 for(int i=0; i<m; i++){
    cout<<a2[i]<<" ";
 }
    return 0;
}