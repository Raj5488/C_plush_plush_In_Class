#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //gp:- 1 2 4 8 16...n terms
    // gp:- 2 6 18 54 ...n terms
        int a = 1;
        for(int i=1;i<n;i++){
            cout<<a<<endl;
            a = a * 2;
        }
}