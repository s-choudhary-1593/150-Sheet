#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    int a=0,b=1,c;
    cout<<"Fibonacci sequence: "<<endl;

    for(int i=0;i<N;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}    
    