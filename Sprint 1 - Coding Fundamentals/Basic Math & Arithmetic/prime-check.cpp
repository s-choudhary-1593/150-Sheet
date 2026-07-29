#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;
    if (N < 2)
    {
        cout << "The number is not Prime";
        return 0;
    }

    // for loop to check if N is prime using break statement
    int i;
    for (i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            break;
        }
    }
    if (i > sqrt(N))
    {
        cout << "The number is Prime: " << N << endl;
    }
    else
    {
        cout << "The number is not Prime: " << N << endl;
    }

    // using continue statement to check if N is prime
    bool isPrime = true;

    if (N == 2)
    {
        isPrime = true;
    }
    else if (N % 2 == 0)
    {
        isPrime = false;
    }
    else
    {
        for (int j = 3; j <= sqrt(N); j++)
        {
            if (j % 2 == 0)
            {
                continue;
            }

            if (N % j == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << "Using continue : Prime";
    }
    else
    {
        cout << "Using continue : Not Prime";
    }

    return 0;
}
