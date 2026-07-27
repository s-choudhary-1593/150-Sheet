#include<iostream>
using namespace std;

int main(){
    int S;
    cout<<"Enter marks: ";
    cin>>S;

    if(S>=90){
        cout<<"A";
    }
    else if(S>=75){
        cout<<"B";
    }
    else if(S>=60){
        cout<<"C";
    }
    else if(S>=50){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
}