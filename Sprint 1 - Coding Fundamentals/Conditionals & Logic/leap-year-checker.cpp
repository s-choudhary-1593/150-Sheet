#include<iostream>
using namespace std;

int main(){
    int Y;
    cout<<"Enter a year: ";
    cin>>Y;

    if((Y%4==0 && Y%100!=0)|| (Y%400==0)){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
}