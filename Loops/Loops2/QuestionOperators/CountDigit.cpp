// WAP to count digits of a gien number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int count= 0;
    int a = n;
    while(n>10){
        n = n/10;
        count ++;
    }
    if(a == 0) cout<<1;
    else cout<<count;
}