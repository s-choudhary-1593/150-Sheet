#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main()
{
    string S, W;

    cout << "Enter sentence: ";
    getline(cin, S);

    cout << "Enter target word: ";
    cin >> W;

    // Convert target word to lowercase
    for (char &ch : W)
    {
        ch = tolower(ch);
    }

    stringstream ss(S);

    string word;
    int count = 0;

    // Read words one by one
    while (ss >> word)
    {
        // Convert current word to lowercase
        for (char &ch : word)
        {
            ch = tolower(ch);
        }

        // Compare
        if (word == W)
        {
            count++;
        }
    }

    cout << "Occurrences = " << count << endl;

    return 0;
}