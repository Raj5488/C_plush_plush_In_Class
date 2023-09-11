#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a=20,b=60;
    // cin>>a,b;
    int* x = &a;
    int* y = &b;
    swap(x,y);
    // swap(&a,&b);
    cout<<a<<" "<<b;
}