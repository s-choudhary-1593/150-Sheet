#include <iostream>
using namespace std;

int main()
{
    int N, result = 0;
    cout << "Enter number: ";
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        result = N * i;
        cout << N << " x " << i << " = " << result << endl;
    }

    return 0;
}