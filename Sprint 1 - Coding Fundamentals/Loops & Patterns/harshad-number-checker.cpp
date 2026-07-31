#include<iostream>
using namespace std;

int main(){
    int N,digit,count=0;
    cout<<"Enter a number: ";
    cin>>N;
    int original = N;

    int sum =0;
     while(N>0){
        digit=N%10;
        sum+=digit;
        N/=10;
    }
    cout<<"Sum of number: "<<sum<<endl;
    if(original%sum==0){
        cout<<"Harshad";
    }
    else{
        cout<<"Not Harshad";
    }
}