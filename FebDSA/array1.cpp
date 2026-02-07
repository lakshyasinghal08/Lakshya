#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;
void leftrotate(int arr[] , int n , int d){
    reverse(arr,arr+d);
    reverse(arr+d , arr+n);
    reverse(arr,arr+n);
}
int linearsearch(int arr[] , int n , int element){
    for(int i=0; i<n;i++){
        if(arr[i] == element){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
// Brute force approach
// int arr[] = {1,1,2,2,3,3,4,4,5,99};
// int n = sizeof(arr)/sizeof(int);
// int d = 3;
// int temp[d];
//store element in the temp
// for(int i=0; i<d; i++){
//     temp[i] = arr[i];
// }
// shift all the element in the end
// for(int i=d; i<n;i++){
    // arr[i-d] = arr[i];
// }
// put the temp at the end
// int j = 0;
// for(int i=n-d;i<n;i++){
// arr[i] = temp[j];
// j++;
// }
// for(int i=0; i<n; i++){
// cout<<arr[i]<<" ";
// }
// int arr[] = {1,1,2,2,3,3,4,4,5,99};
// int n = sizeof(arr)/sizeof(int);
// int d;
// cout<<"enter the value of d :";
// cin>>d;
// leftrotate(arr,n,d);
// for(int i=0; i<n; i++){
// cout<<arr[i]<<" ";
// }

// int arr[] = {1,1,2,2,3,3,4,4,5,99};
// """ this is the brute force attack : """
// int arr[] = {0,1,2,3,4,0,0,12,3,9,8,0};
// int n = sizeof(arr)/sizeof(int);

// int temp[n];
// int j =0 ;
// for(int i=0; i<n; i++){
//     if(arr[i] != 0){
//         temp[j] = arr[i];
//         j++;
//     }
// }
// for(int i=0; i<j;i++){
//     arr[i] = temp[i];
// }
// for(int i=j;i<n;i++){
//     arr[i] = 0;
// }
// for(int i=0; i<n ;i++){
//     cout<<arr[i]<<" ";
// }

///"""this is the optimal approach for move the all zeros till end"""
// int arr[] = {0,1,2,3,4,0,0,12,3,9,8,0};
// int n = sizeof(arr)/sizeof(int);
// int j = -1;
// for(int i=0; i<n; i++){
//     if(arr[i] == 0){
//         j = i;
//         break;
//     }
// }
// if(j==-1) return 0;
// for(int i=j+1; i<n; i++){
//     if(arr[i] != 0){
//         swap(arr[i], arr[j]);
//         j++; = 99;
// int linear
//     }
// }
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }

// int arr[] = {12,12,134,94,73,77,89,99,828,9909,2873};
// int n = sizeof(arr)/sizeof(int);
// int target_index = linearsearch(arr,n,target);
// cout<<target<<"is found at index : "<<linear_index<<endl;

//""" union of the twodifferent arrays : """
set<int>st;
int a1[] = {1,1,2,3,4,5,6};
int a2[] = {1,2,3,5,7,8};
int a1n = sizeof(a1)/sizeof(int);
int a2n = sizeof(a2)/sizeof(int);
for(int i=0;i<a1n;i++){
  st.insert(a1[i]);
}
for(int i=0;i<a2n;i++){
  st.insert(a2[i]);
}
vector<int>temp;
for(auto it : st){
    temp.push_back(it);
}
for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
}
    return 0;
}