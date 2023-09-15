// Callculate the sum of all the elements in the agiven array
#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    //inpute in array form
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    int sum = 0;
    for(int i=0;i<=n-1;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of Array :-"<<sum;
}