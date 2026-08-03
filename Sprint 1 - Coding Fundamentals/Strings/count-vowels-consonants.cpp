#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    int vowels = 0, consonants = 0;

    cout << "Enter string: ";
    getline(cin, S);

    for (int i = 0; i < S.length(); i++)
    {
        char ch = S[i];

        if (ch == ' ')
        {
            continue;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}
