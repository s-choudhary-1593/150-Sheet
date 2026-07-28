#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cout << "Enter sides: ";
    cin >> A >> B >> C;

    if (A + B > C && A + C > B && B + C > A)
    {
        cout << "Valid" << endl;

        if (A == B && B == C)
        {
            cout << "Equilateral Triangle";
        }
        else if (A == B || B == C || C == A)
        {
            cout << "Isoceles Triangle";
        }
        else
        {
            cout << "Scalene Triangle";
        }
    }
    else
    {
        cout << "Not Valid" << endl;
    }
}
