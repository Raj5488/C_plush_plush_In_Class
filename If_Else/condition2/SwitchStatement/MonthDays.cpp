#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Month Number : ";
    cin>>x;

                    //LONG METHODS
    // switch (x)
    // {
    // case 1 : //jan
    //     cout<<"31";
    //     break;
    // case 2 : // feb
    //     cout<<"28";
    //     break;
    // case 3 :    // mar
    //     cout<<"31";
    //     break;
    // case 4 : //Aprial
    //     cout<<"30";
    //     break;
    // case 5 : // may
    //     cout<<"31";
    //     break;
    // case 6 : //june
    //     cout<<"30";
    //     break;
    // case 7 : // jul
    //     cout<<"31";
    //     break;
    // case 8 : // Aug
    //     cout<<"30";
    //     break;
    // case 9 : // sep
    //     cout<<"31";
    //     break;
    // case 10 : // oct
    //     cout<<"31";
    //     break;
    // case 11 : // Nov
    //     cout<<"30";
    //     break;
    // case 12 : // Dec
    //     cout<<"31";
    //     break;
    // default :
    //     cout<<"Invalid Number";
    // }

        //SHORT METHODS
    // 1 3 5 7 8 10 12 -> Days
    // 4 6 9 11 -> 30 days
    // 2 - 28 days
    switch(x<=7 && x%2!=0 || (x>=8 && x%2==0)){
        case 1:
        cout<<"31";
    }
    switch(x==4 || x==6 || x==9 || x==11){
        case 1:
        cout<<"31";
    }
    switch(x){
        case 2 :
        cout<<"28"
    }
}