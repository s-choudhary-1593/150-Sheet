#include<iostream>
#include <numeric>
using namespace std;

int main(){
    int A,B,g;
    cout<<"Enter two numbers: ";
    cin>>A>>B;
    g=gcd(A,B);
    cout<<"LCM of "<<A<<" and "<<B<<" is: "<<(A/g)*B<<endl;
}