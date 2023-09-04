// WAP to print reverser of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int lastDigit = 0;
    int reverse = 0;
    while(n>0){
        reverse*= 10;
        lastDigit = n%10;
        reverse += lastDigit;
        n/=10;  
    }
    cout<<reverse;


        //Second Methods
    //     while(n>0){
    //     lastDigit = n%10;
    //     reverse*= 10;
    //     reverse += lastDigit;
    //     n/=10;  
    // }
    // cout<<reverse;



                //third methods
    //     while(n>0){
    //     lastDigit = n%10;
    //     reverse += lastDigit;
    //     reverse*= 10;
    //     n/=10;  
    // }
    // cout<<reverse;
}