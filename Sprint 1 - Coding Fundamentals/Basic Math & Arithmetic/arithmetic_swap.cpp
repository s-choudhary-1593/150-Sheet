#include<iostream>
using namespace std;

int main(){
    int a,b,temp;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    //Arithmetic
    cout<<"Sum="<<a+b<<endl;
    cout<<"Difference="<<a-b<<endl;
    cout<<"Product="<<a*b<<endl;
    cout<<"Quotient"<<a/b<<endl;


    //Swapping
    cout<<"Before Swapping: a="<<a<<" b="<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"After Swapping: a="<<a<<" b="<<b<<endl;

    return 0;
}