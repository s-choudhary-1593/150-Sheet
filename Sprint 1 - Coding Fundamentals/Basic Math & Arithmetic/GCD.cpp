#include<iostream>
#include <numeric>
using namespace std;

int main(){
    int A,B,temp;
    cout<<"Enter two numbers: ";
    cin>>A>>B;

    /* Find GCD using gcd function from <numeric> header
    cout<<"GCD of "<<A<<" and "<<B<<" is: "<<gcd(A,B)<<endl;*/

    // Find GCD using Euclidean algorithm
    int x=A, y=B;
    while(B!=0){
        temp=A%B;
        A=B;
        B=temp;
    }
    cout<<"GCD of "<<x<<" and "<<y<<" is: "<<A<<endl;
}