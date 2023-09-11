#include<iostream>
using namespace std;
void swap(int &x, int &y){   // pass by reference
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main(){
    int a=20,b=60;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;
}