#include<iostream>
using namespace std;

int main(){
    int N,count;
    cout<<"Enter rows: ";
    cin>>N;


    count=1;
    for(int i =1 ;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}