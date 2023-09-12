// Write a functio to find out the first and last digit of a number withoiut returning anything
#include<iostream>
using namespace std;
void find(int n, int* ptr1, int* ptr2){
    *ptr2 = n%10;  // this is lastDigit
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
    return;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int firstDigit, lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    find(n, ptr1, ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}