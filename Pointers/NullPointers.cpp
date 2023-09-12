#include<iostream>
using namespace std; 
int main(){

    // this all value and answer is reserved 

    int* ptr =NULL;
    cout<<ptr<<endl;   
    cout<<&ptr;
    
    int* ptr =0; 
    cout<<ptr<<endl;   
    cout<<&ptr;
    
    
    int* ptr ='\0'; // reserved addres
    cout<<ptr<<endl;   
    cout<<&ptr;
    


    // \0 -> this is known as non character
}