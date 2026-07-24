#include<iostream>
using namespace std;

int main(){
    int N,digit,reverse;
    cout<<"Enter digit: ";
    cin>>N;
    int original = N;
    reverse=0;
    while(N>0){
        digit=N%10;
        reverse=reverse*10+digit;
        N=N/10;
    }
    if(original==reverse){
        cout<<"The digit is palindrome number"<<endl;
    }
    else{
        cout<<"The digit is not a palindrome number"<<endl;
    }
    return 0;
}