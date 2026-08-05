#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(str1 == str2){
        cout << "Anagram";
    }
    else{
        cout << "Not Anagram";
    }
    return 0;
}