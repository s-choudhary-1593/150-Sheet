#include <iostream>
using namespace std;

int main()
{
    int N, Sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    // for loop accumulator
    for (int i = 1; i <= N; i++)
    {
        Sum += i;
    }
    cout << "For Loop Sum: " << Sum<<endl;

    // while loop accumulator
    int i = 1;
    int Sum2 = 0;
    while (i <= N)
    {
        Sum2 += i;
        i++;
    }
    cout << "While Loop Sum: " << Sum<<endl;

    // gauss formula
    Sum = N * (N + 1) / 2;
    cout << "Gauss Formula Sum: " << Sum<<endl;
}
