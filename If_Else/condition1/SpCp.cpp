#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Cost Price : ";
    int cp;
    cin>>cp;
    cout<<"Enter the Selling Price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"profit = "<<sp-cp;
    }
    else if(sp==cp){
        cout<<"No profit No loss!";
    }
    else{
        cout<<"loss = "<<cp-sp;
    }

}