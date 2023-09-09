#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of Rows : ";
    cin>>n;
    int m;
    cout<<"No of Colums : ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}