#include<iostream>
using namespace std;

int main(){
    int N,reverse,digit;
    cout<<"Enter a digit: ";
    cin>>N;

    reverse=0;
    while(N>0){
        digit=N%10;
        reverse=reverse*10+digit;
        N=N/10;
    }
    cout<<"Reverse: "<<reverse;
}