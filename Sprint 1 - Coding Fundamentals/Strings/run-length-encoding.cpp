#include<iostream>
#include<string>
using namespace std;

int main()
{
    string S;
    cout << "Enter the string: ";
    getline(cin, S);

    string encoded = "";
    int count = 1;

    for (int i = 0; i < S.length(); i++)
    {
        if (i < S.length() - 1 && S[i] == S[i + 1])
        {
            count++;
        }
        else
        {
            encoded += S[i];
            encoded += to_string(count);
            count = 1;
        }
    }

    cout << "Encoded: " << encoded << endl;

    return 0;
}