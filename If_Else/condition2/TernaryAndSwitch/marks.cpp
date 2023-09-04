//Given the marks of the student. If the marks are greater than 33 print the result as pass otherwise fail without using if-else statement.
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    // if(marks>33) cout<<"You are pass";
    // else cout<<"Your are fail";

        // TERNARY OPERATOR USING
    // condition ? : true : false ;
    marks >= 33 ? cout<<"You are pass" : cout<<"You are failed" ;
}