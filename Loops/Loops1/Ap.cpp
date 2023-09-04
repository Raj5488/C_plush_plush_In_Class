#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //First methods we can print this
        //     for(int i=1; i<=2*n-1;i+2){
        //         cout<<i<<endl;
        //     }

        //second methos we can print this
        //seprate variable
        // 1 3 5 7 9 .......print n times
        // 4 7 10 13 17 .....print this
        int a = 1;
        for(int i=1;i<n;i++){
            cout<<a<<endl;
            a = a + 3;
        }
}