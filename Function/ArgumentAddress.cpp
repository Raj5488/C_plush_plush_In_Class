#include<iostream>
using namespace std;
void fun(int x , int y){
    cout<<"Address of func value x"<<&x<<endl;
    cout<<"Address of func value y"<<&y<<endl;
}
int main(){
    int x = 3;
    int y = 4;
    cout<<"Address of main value x"<<&x<<endl;
    cout<<"Address of main value y"<<&y<<endl;
    fun(x,y);
}