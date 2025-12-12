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

// int main(){
//     int arr[]= {10,20,30,40};

//     int *ptr = arr;
//     cout<<*(ptr + 1)<<endl;
//     cout<<*(ptr + 3)<<endl;
//     ptr++;
//     cout<<*ptr<<endl;
//     return 0;
// }

 /*Declare an integer variable a and a pointer p that stores the address of a.
Then print the value of a using the pointer.*/
// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout<<*ptr<<endl;

//     return 0;
// }

/*Write a program to change the value of a variable from 10 to 50 using a pointer.*/
// void changevalue(int *a){
//     *a = 50;
// }
// int main(){
//     int a = 10;

//     changevalue(&a);
//     cout<<"a = "<< a <<endl;

//     return 0;
// }
// int main(){
//     int arr[] = {10,20,30};
//     int* ptr = arr;
    
//     cout<<*(ptr+1)<<endl;

//     return 0;
// }

// int main(){
//     int a = 25;
//     int* ptr = &a;

//     cout<<&a<<endl;
//     cout<<ptr<<endl;

//     return 0;
// }

// void update(int *p){
//     *p = 100;
// }
// int main(){
//     int a = 30;
//     update(&a);

//     cout<<a<<endl;

//     return 0;
// }

// int main(){
//     int x = 20;
//     int *ptr = &x;

//     (*ptr)++;
//     cout<<x<<endl;
//     cout<<*(ptr)<<endl;

//     return 0;
// }

// void swap(int *a , int *b){
// int temp;
// temp = *a;
// *a = *b;
// *b = temp;
// }

// int main(){
// int x, y;
// cout<<"enter the value of x \n";
// cin>>x;
// cout<<"enter the value of y \n";
// cin>>y;
// cout<<"before swapping :\n"<<endl;
// cout<<"x = "<<x<<endl;
// cout<<"y = "<<y<<endl;
// swap(&x , &y);
// cout<<"After swapping : \n"<<endl;
// cout<<"x = "<<x<<endl;
// cout<<"y = "<<y<<endl;

// return 0;
// }

// int main(){
// int a = 5;
// int *p = &a;
// int **q = &p;

// cout<<**q<<endl;

// return 0;
// }

// int main(){
//     int arr[] = {2, 4, 6, 8};
//     int* ptr = arr;

//     cout<<*(ptr+2)<<endl;

//     return 0;
// }

int main(){
    int *ptr = NULL;
    cout<<ptr<<endl;
    return 0;   
}