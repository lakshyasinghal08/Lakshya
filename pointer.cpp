#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl;
    
    int** parptr = &ptr;
    cout<<&ptr<<endl;
    cout<<parptr<<endl;
    return 0;
}