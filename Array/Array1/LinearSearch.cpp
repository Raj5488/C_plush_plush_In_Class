// Find the element x in the array. Take arrray and x as input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array  : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you wantot search: ";
    cin>>x;
    // search
    //chekmars
    bool flag = false; // false -> not present
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"Element is found";
    else cout<<"404 element is not found";
}