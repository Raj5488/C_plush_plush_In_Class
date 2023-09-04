// Write a proram to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and funcitons. The calculator should inpute two numbers and an operator from user.
#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<<"Enter the problem : ";
    cin>>a>>op>>b;

                // if condition makes
    // if(op == '+') cout<<a+b;
    // if(op == '-') cout<<a-b;
    // if(op == '*') cout<<a*b;
    // if(op == '/') cout<<a/b;

        //SWITCH CASE SOLVE IT
switch(op){
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    }
}