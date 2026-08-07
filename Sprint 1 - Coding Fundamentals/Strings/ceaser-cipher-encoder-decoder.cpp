#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    int K;

    cout << "Enter the string: ";
    getline(cin, S);

    cout << "Enter the shift value: ";
    cin >> K;

    // Encoding
    string encoded = "";

    for (int i = 0; i < S.length(); i++)
    {
        char ch = S[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = (ch - 'A' + K) % 26 + 'A';
        }

        encoded += ch;
    }

    cout << "Encoded: " << encoded << endl;

    // Decoding
    string decoded = "";

    for (int i = 0; i < encoded.length(); i++)
    {
        char ch = encoded[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = (ch - 'A' - K + 26) % 26 + 'A';
        }

        decoded += ch;
    }

    cout << "Decoded: " << decoded << endl;

    return 0;
}