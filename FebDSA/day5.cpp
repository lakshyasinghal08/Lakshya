#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;
int algo(int b[] , int size){
// for(int i=0; i<size; i++){
//     int count = 0;
//     for(int j=0; j<size;j++){
//         if(b[i]==b[j]){
//             count++;
//         }
//     }
//     if(count > size/2){
//         return b[i];
//     }
// }
// return -1;
map<int ,int>mpp;
for(int i=0; i<size; i++){
    mpp[b[i]]++;
}
for(auto it:mpp){
    if(it.second>(size/2) ){
      return it.first;
    }
}
return -1;
}
int brute(int a[] , int n , int target){
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(i==j){
                continue;
            }
            if(a[i]+a[j] == target){
                return target;
            }
        }
    }
    return -1;
}
int main(){
//    int a[] = {1,2,0,0,1,2,0,1,1,0,2,2,0,2,1};
//    int n  = sizeof(a)/sizeof(int);

//    int count_0 = 0;
//    int count_1 = 0;
//    int count_2 = 0;
//    for(int i = 0; i<n; i++){
//     if(a[i] == 0){
//         count_0++;
//     }
//     else if(a[i] == 1){
//         count_1++;
//     }
//     else{
//         count_2++;
//     }
//    }
// for(int i=0; i<count_0; i++){
//      a[i] = 0;
// }
// for(int i=count_0; i<count_0+count_1;i++){
//     a[i] = 1;
// }
// for(int i = count_0+count_1; i<n; i++){
//     a[i] =2;
// }
// for(int i=0; i<n; i++){
//     cout<<a[i]<<" ";
// }

// int low = 0;
// int mid = 0;
// int high = n-1;
// while(mid <= high){
//     if(a[mid] == 0){
//         swap(a[low] , a[mid]);
//         low++;
//         mid++;
//     }
//     else if(a[mid] == 1){
//         mid++;
//     }
//     else {
//         swap(a[mid] , a[high]);
//         high--;
//     }   
// }
//  for(int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }

// int b[] = {2,2,1,3,2 , 4,2,2};
// int size = sizeof(b)/sizeof(int);
// int target = 4;

// int array = algo(b,size);
// cout<<"array = "<<array<<" "<<endl;

// int count = 0;
// int el;
// for(int i=0; i<size; i++)
// {
//     if(count == 0){
//         count++;
//         el = b[i];
//     }
//     else if(b[i] == el){
//         count++;
//     }
//     else{
//         count--;
//     }
// }
//  int count1 = 0;
//     for(int i=0; i<size; i++){
//         if(b[i] == el){
//             count1++;
//         }
//     }
//     if(count1>(size/2)){
//         cout<<el<<"is the highest occuring element : "<<endl;
//     }
//     else{
//         cout<<"no majority element : "<<endl;
//     }

    // int sorted = brute(b,size,target);
    // cout<<"sorted is found = "<<sorted<<" "<<endl;

    // int b[] = {2,2,1,3,2 , 4,2,2};
    // int size = sizeof(b)/sizeof(int);
    // int target = 7;
    // sort(b,b+size);
    // int left = 0;
    // int right = size-1;
    // bool found = false;
    // while(left <= right){
    //     int sum = b[left] + b[right];
    //     if(sum == target){
    //         cout<<"found : "<<b[left]<<" "<<b[right]<<endl;
    //         found = true;
    //         break;
    //     }
    //     else if(sum < target){
    //         left++;
    //     }
    //     else{
    //         right--;
    //     }
    // }
    // if(!found){
    //     cout<<"target not found : ";
    // }

    // int a[] = {1,0,0,1,2,2,1,2,0,0,1,2};
    // int n = sizeof(a)/sizeof(int);
    // int low = 0;
    // int mid = 0;
    // int high = n-1;
    // while(mid < high){
    //     if(a[mid] == 0){
    //         swap(a[low] , a[mid]);
    //         mid++;
    //         low++;
    //     }
    //     else if(a[mid] == 1){
    //         mid++;
    //     }
    //     else{
    //         swap(a[mid] , a[high-1]);
    //         high--;
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }

    int a[] = {1,2,2,2,3,4,2};
    int n = sizeof(a)/sizeof(int);
    int count = 0;
    int el = a[0];
    for(int i=0;i<n;i++){
    if(count == 0){
        count++;
        el = a[i];
    }
    else if(a[i] == el){
        count++;
    }
    else{
        count--;
    }
    }
    int count1 = 0;
    for(int i=0; i<n; i++){
       if(a[i] == el){
        count1++;
       }
    }
    if(count1 > (n/2)){
        cout<<el<<" has the most occuring element in an array : ";
    }
    else{
        cout<<" no majority element in the array : ";
    }
    return 0;
}