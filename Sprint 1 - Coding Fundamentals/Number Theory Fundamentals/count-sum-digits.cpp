#include<iostream>
using namespace std;

int main(){
    int N,sum=0, digit,count=0;
    cout<<"Enter a number: ";
    cin>>N;

    while(N>0){
        digit=N%10;
        sum+=digit;
        N/=10;
        count++;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
    cout<<"Number of digits is: "<<count<<endl;
}
