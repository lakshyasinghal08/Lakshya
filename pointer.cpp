#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     cout<<*(&a)<<endl;
//     cout<<*(ptr)<<endl;
    
//     int** parptr = &ptr;
//     cout<<&ptr<<endl;
//     cout<<parptr<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int *p = &a;
//     int **q = &p;

//     cout<<*p<<endl; // ==>> 10
//     cout<<**q<<endl; // ==>> 10
//     cout<<p<<endl;  // ==>> address of a
//     cout<<*q<<endl; // ==>> address of a
//     return 0;
// }
// void change(int *a){
//     *a = 20;
// }

// int main(){
//     int a = 10;
    
//     change(&a);
//     cout<<"the value of a in main function => "<<a<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int *ptr = &a;

//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
//     ptr--;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int *ptr = &a;
 
//     cout<<ptr<<endl;
//     ptr -= 2; // ==>> 8 bites minus in the memory address that the ptr point
//     cout<<ptr<<endl;


// return 0;
// }

// int main(){
//     int arr[] = { 1,2,3,4,5};

//     cout<<*(arr)<<endl;
//     cout<<*(arr + 1)<<endl;
//     cout<<*(arr + 2)<<endl;
//     cout<<*(arr + 3)<<endl;
//     cout<<*(arr + 4)<<endl;

//     return 0;
// }

// int main(){
//     int *ptr1;
//     int *ptr2;

//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;

//     cout<<(ptr1 < ptr2)<<endl;

//     return 0;
// }

int main(){
    int arr[]= {10,20,30,40};

    int *ptr = arr;
    cout<<*(ptr + 1)<<endl;
    cout<<*(ptr + 3)<<endl;
    ptr++;
    cout<<*ptr<<endl;
    return 0;
}