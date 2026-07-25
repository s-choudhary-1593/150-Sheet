#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;

    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            sum += i;
        }
    }

    if (sum == N)
    {
        cout << N << " is a Perfect Number";
    }
    else
    {
        cout << N << " is Not a Perfect Number";
    }

    return 0;
}