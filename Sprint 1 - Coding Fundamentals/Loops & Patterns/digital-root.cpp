#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int original = N;

    // Method 1: Using Loop
    while (N >= 10)
    {
        int sum = 0;

        while (N > 0)
        {
            int digit = N % 10;
            sum += digit;
            N = N / 10;
        }

        N = sum;
    }

    cout << "Digital Root (Loop): " << N << endl;

    // Method 2: Using Formula
    int digitalRoot;

    if (original == 0)
    {
        digitalRoot = 0;
    }
    else if (original % 9 == 0)
    {
        digitalRoot = 9;
    }
    else
    {
        digitalRoot = original % 9;
    }

    cout << "Digital Root (Formula): " << digitalRoot << endl;

    // Verification
    if (N == digitalRoot)
    {
        cout << "Verified: Both methods give the same result.";
    }
    else
    {
        cout << "Verification Failed!";
    }

    return 0;
}