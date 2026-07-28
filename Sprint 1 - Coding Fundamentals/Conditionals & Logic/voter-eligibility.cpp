#include <iostream>
using namespace std;

int main()
{
    int A, C, D;

    cout << "Enter age: ";
    cin >> A;

    cout << "Enter citizenship (1 = Yes, 0 = No): ";
    cin >> C;

    cout << "Enter disqualification (1 = Yes, 0 = No): ";
    cin >> D;

    // Validate input
    if ((C != 0 && C != 1) || (D != 0 && D != 1))
    {
        cout << "Invalid Input";
    }
    else if (A >= 18 && C == 1 && D == 0)
    {
        cout << "Eligible";
    }
    else if (A < 18)
    {
        cout << "Not Eligible - Too young";
    }
    else if (C == 0)
    {
        cout << "Not Eligible - No citizenship";
    }
    else if (D == 1)
    {
        cout << "Not Eligible - Disqualified";
    }

    return 0;
}