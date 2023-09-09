#include<iostream>
#include<cmath>
using namespace std;
int mini(int x, int y){
    int a;
    if(x<y) a =x;
    else a = y;
    return a;
}

int sumOfTwo(int x , int y){
    return  x + y;
}
int main(){
    // cout<<sumOfTwo(20,50);

    int x,y;
    cin>>x,y;
    // cout<<min(x,y);
    cout<<sqrt(15);
    cout<<mini(5,50);
}