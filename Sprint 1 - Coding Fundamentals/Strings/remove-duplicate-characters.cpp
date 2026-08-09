#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    string S;
cin >> S;

set<char> seen;

for(int i = 0; i < S.length(); i++)
{
    if(seen.find(S[i]) == seen.end())
    {
        cout << S[i];
        seen.insert(S[i]);
    }
}   
}