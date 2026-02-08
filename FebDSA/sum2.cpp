#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main(){
    // two sum problem
    int a[] = {4,6,3,8,9,23,12,54,18,17};
    int n = sizeof(a)/sizeof(int);

    // brute force approach
    // int target = 32;
    // for(int i=0; i<n; i++){

    //     for(int j=0; j<n; j++){

    //         if(i == j){

    //             continue;
    //         }

    //         if(a[i] + a[j] == target){

    //             cout<<"index i = "<<i<<endl<<"index j = "<<j<<endl;

    //             cout<<target<<"the target at found a index "<<i<<"and"<<j<<endl;
    //         }
    //     }
    // }

    // optimal approach
    int target = 14;
    sort(a,a+n);
    int left = 0; 
    int right = n-1;
    bool found = false;
    while(left < right){
        int sum = a[left] + a[right];
        if(sum == target){
            cout << "Found: " << a[left] << " + " << a[right];
            found =  true;
            break;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
     if(!found){
            cout<<"target not found : ";
        }
    return 0;
}