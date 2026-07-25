#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Divisors: ";

    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    for (int i = sqrt(N); i >= 1; i--)
    {
        if (N % i == 0)
        {
            if (i != N / i)
            {
                cout << N / i << " ";
            }
        }
    }

    return 0;
}