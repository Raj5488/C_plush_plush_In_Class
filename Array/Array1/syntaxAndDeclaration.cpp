#include<iostream>
using namespace std;
int main(){
    // int arr[7]; // 0,1,2,3,4,5,6
    // arr[0] = 7;
    // arr[1] = 1;
    // arr[2] = 6;
    // arr[3] = 3;
    // arr[4] = 9;
    // arr[5] = 7;
    // arr[6] = 0;
    // cout<<arr[0];


    // **********second methods
    int arr[7] = {1,4,5,6,7,85,5};
    // cout<<arr[5];


        //inpute
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }


    //output
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}
