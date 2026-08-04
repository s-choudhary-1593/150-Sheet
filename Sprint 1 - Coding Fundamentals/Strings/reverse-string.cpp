#include<iostream>
using namespace std;

int main(){
    string S;
    cout << "Enter string: ";
    getline(cin, S);

    // for(int i = S.length() - 1; i >= 0; i--){
    //     cout << S[i];
    // }
    // return 0;

    //built-in slice
    cout << S.substr(0, S.length());

}