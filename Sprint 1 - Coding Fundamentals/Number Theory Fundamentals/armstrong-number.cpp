#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, digit, count = 0, original, sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    // Count the digits
    original = N;
    while (N > 0)
    {
        digit = N % 10;
        N = N / 10;
        count++;
    }

    // Compute the digit
    N = original;
    while (N > 0)
    {
        digit = N % 10;
        sum += (int)pow(digit, count);
        N = N / 10;
    }
    cout << "The number of digits: " << count << endl;
    cout << "The sum of digits: " << sum << endl;
    if (sum == original)
    {
        cout << "The number is Armstrong";
    }
    else
    {
        cout << "The number is not Armstrong";
    }
    return 0;
}
