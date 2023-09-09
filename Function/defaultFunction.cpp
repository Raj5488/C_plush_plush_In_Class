#include<iostream>
using namespace std;
void func(int x =5, int y =10){
    cout<<x<<" "<<y;
}
int main(){
    func(50,60);
}