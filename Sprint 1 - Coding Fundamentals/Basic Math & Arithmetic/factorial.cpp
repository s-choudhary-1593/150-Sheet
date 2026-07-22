#include<iostream>
using namespace std;

int main(){
    int N,factorial=1;
    cout<<"Enter a number: ";
    cin>>N;

    //for loop accumulator
    for(int i=1;i<=N;i++){
        factorial*=i;
    }
    cout<<"For Loop Factorial: "<<factorial<<endl;

    //smallest factor of n using while loop
    int i=2;
    while(i<=N){
        if(N%i==0){
            break;
        }
        i++;
    }
    if(i==N){
        cout<<"Smallest Factor is Prime: "<<i<<endl;
    }
    else{
        cout<<"Smallest Factor is: "<<i<<endl;
    }
}