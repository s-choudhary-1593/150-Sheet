#include <iostream>
#include <cmath>
using namespace std;

int power(int B, int E)
{
    if (E == 0)
    {
        return 1;
    }
    else
    {
        return B * power(B, E - 1);
    }
}

int main()
{
    int E, B;
    int result = 1;
    cout << "Enter base: ";
    cin >> B;
    cout << "Enter exponent: ";
    cin >> E;

    // Iterative
    for (int i = 0; i < E; i++)
    {
        result *= B;
    }
    cout << "Iterative Result: " << result << endl;

    // Recursive
    cout << "Recursive Result: " << power(B, E) << endl;
    return 0;
}