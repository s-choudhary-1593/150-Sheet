#include<iostream>
using namespace std;

int main(){
    int A,B;
    cout<<"Enter range: ";
    cin>>A>>B;
    int sum=0;
    if(A%2==0){
        A++;
    }
    for(int i=A;i<=B;i+=2){
        sum+=i;
    }
    cout<<"Sum = "<<sum;
}