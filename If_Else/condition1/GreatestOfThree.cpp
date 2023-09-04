#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter Fist Number :";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;
    cout<<"Enter Third Number :";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is largest";
    }
    if(b>a && b>c){
        cout<<b<<" is largest";
    }
    if(c>b && c>a){
        cout<<c<<" is largest";
    }

}