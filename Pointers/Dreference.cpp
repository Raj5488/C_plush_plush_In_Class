#include<iostream>
using namespace std; 
int main(){
    int x = 200;
    int* p = &x;
    // x = 20;
    cout<<*p<<endl;
    *p = 50;
    cout<<x;
}