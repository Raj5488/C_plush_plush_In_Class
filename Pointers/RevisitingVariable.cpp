#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long long)<<endl;

    // int x = 5;
    // char x = 'S';
    float x = 2.55;
    // int x;   // take space 4 butes 
    cout<<"Address of x :-> "<<&x<<endl;


    int p = 5;
    int q = 10;
    cout<<&p<<endl;
    cout<<&q;
}