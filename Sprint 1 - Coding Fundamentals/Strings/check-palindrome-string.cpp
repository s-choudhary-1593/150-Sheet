#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string S, str = "", rev = "";

    cout << "Enter string: ";
    getline(cin, S);

    // Normalize: lowercase + remove spaces
    for (int i = 0; i < S.length(); i++)
    {
        char ch = tolower(S[i]);

        if (ch != ' ')
        {
            str += ch;
        }
    }

    // Reverse normalized string
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }

    // Compare
    if (str == rev)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}