#include<iostream>
using namespace std;
int removeduplicates(int arr[]  , int n){
    int i = 0;
    for(int j=0; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int reomvedupl(int arr[] , int n){
    int i = 0;
    for(int j=0; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
   int main(){
    // int arr[] = {11,5,7,5,3};
    // int largest = arr[0];
    // for(int i=0; i<5; i++){
    //     if(arr[i] > largest){
    //       largest = arr[i];
    //     }
    // }
    // cout<<"largest = "<<largest<<endl;

    //  int arr[] = {11,11,5,7,7,5,3};
    //  int slargest = -1;
    //  int largest = 0;
    //  for(int i=0;i<5;i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    //  }
    //  cout<<"largest = " << largest << endl;

    //  for(int i=0; i<5; i++){
    //     if(arr[i] > slargest && arr[i] != largest){
    //         slargest = arr[i];
    //     }
    //  }
    //  cout<<"second largest = "<<slargest<<endl;
    // int arr[] = {11,11,5,7,7,5,3,15,1,90,32};
    // int largest = arr[0];
    // int slargest = -1;
    // for(int i=0; i<11;i++){
    //     if(arr[i] >largest ){
    //         slargest = largest;
    //         largest = arr[i];
    //     }
    //     else if(arr[i]<largest && arr[i]>slargest){
    //         slargest = arr[i];
    //     }
    // }
    // cout<<"largest = "<<largest<<endl<<"second largest = "<<slargest<<endl;
    // int smallest = arr[0];
    // int ssmallest = INT8_MAX;
    // for(int i=0; i<11; i++){
    //     if(arr[i] < smallest){
    //         ssmallest = smallest;
    //         smallest = arr[i];
    //     }
    //     else if(arr[i] != smallest && arr[i] < ssmallest){
    //         ssmallest = arr[i];
    //     }
    // }
    //     cout<<"smallest = "<<smallest<<endl<<"second smallest = "<<ssmallest<<endl;
    // int arr[] = {11,11,5,7,7,5,3,15,1,90,32};
    // // int arr[] = {1,2,3,3,4,4,5,5,5};
    // bool sorted = true ;
    // for(int i=0; i<8;i++){
    //    if(arr[i]>arr[i+1]){
    //      sorted = false;
    //     break;
    //    }
    // }
    // if(sorted){
    //     cout<<"array is  sorted : ";
    // }
    // else{
    //     cout<<"array is not sorted : ";
    // }
//    int arr[] = {1,1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
//    int n = sizeof(arr)/sizeof(int);

//    int newarray = removeduplicates(arr,n);
//    for(int i=0; i<newarray; i++){
//     cout<<arr[i]<<" ";
//    }
// largest element
// int arr[] = {1,2,1,323,4,44,99,0,98};
// int n = sizeof(arr)/sizeof(int);
// int largest = arr[0];
// for(int i=0;i<n;i++){
//     if(arr[i]>largest){
//         largest = arr[i];
//     }
// }
// cout<<"largest = "<<largest<<endl;

// second largest
// int arr[] = {1,2,1,323,4,44,99,0,98};
// int n = sizeof(arr)/sizeof(int);
// int largest = arr[0];
// int slargest = -1;
// for(int i=0;i<n;i++){
//     if(arr[i]>largest){
//         slargest = largest;   
//         largest = arr[i];
//     }
//     else if(arr[i] < largest && arr[i] > slargest){
//         slargest = arr[i];
//     }
// }
// cout<<"largest = "<<largest<<endl<<"second largest = "<<slargest<<endl;

// smallest and the second smallest 
// int arr[] = {1,2,1,323,4,44,99,0,98};
// int n = sizeof(arr)/sizeof(int);
// int smallest = arr[0];
// int second_smallest = INT8_MAX;
// for(int i=0; i<n; i++){
//     if(arr[i] < smallest ){
//         second_smallest = smallest;
//         smallest = arr[i];
//     }
//     else if(arr[i] != smallest && arr[i] < second_smallest){
//         second_smallest = arr[i];
//     }
// }
// cout<<"smallest = "<<smallest<<endl<<"second smallest = "<<second_smallest<<endl;

// check the array is sorted or not
// int arr[] = {1,22,33,44,55,66,77};
// int n = sizeof(arr)/sizeof(int);
// bool sorted = true;
// for(int i=0; i<n-1; i++){
//     if(arr[i] > arr[i+1]){
//         sorted = false;
//         break;
//     }
// }
// if(sorted){
//     cout<<"array is sorted "<<endl;
// }
// else{
//     cout<<"array is not sorted : "<<endl;
// }
// int arr[] = {1,1,2,2,3,3,4,4,5,99};
// int n = sizeof(arr)/sizeof(int);
// int new_array = reomvedupl(arr , n);
// for(int i=0; i<new_array;i++){
//     cout<<arr[i]<<" ";
// }
int arr[] = {1,1,2,2,3,3,4,4,5,99};
int n = sizeof(arr)/sizeof(int);
int temp = arr[0];
for(int i=0; i<n;i++){
arr[i-1] = arr[i];
}
arr[n-1] = temp;
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

return 0;
}
