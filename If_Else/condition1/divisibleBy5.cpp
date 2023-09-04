#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"Divisible by Five";
    }
    else{
        cout<<"This not divisible by Five";
    }
}