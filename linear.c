#include<stdio.h>
#include<stdlib.h>

int linearsearch(int arr[] , int size , int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] ={ 1,29,34,56,7,89,9,0,6,4};
    int size = sizeof(arr)/sizeof(int);
    int element = 7;
    int searchindex = linearsearch(arr , size , element);
    printf("%d element found at index %d\n",element , searchindex);
    
    return 0;
}