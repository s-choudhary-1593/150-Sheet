#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char OP;
    cout << "Enter values and OP: ";
    cin >> A >> OP >> B;

    if (OP == '+')
    {
        cout << A + B;
    }
    else if (OP == '-')
    {
        cout << A - B;
    }
    else if (OP == '*')
    {
        cout << A * B;
    }
    else if (OP == '/')
    {
        if (B != 0)
        {
            cout << A / B;
        }
         else
        {
            cout << "Error: Division by Zero";
        }
    }
    else if (OP == '%')
    {
        if (B != 0)
        {
            cout << A % B;
        }
        else
        {
            cout << "Error: Division by zero";
        }
    }
    else
    {
        cout << "Invalid Operator";
    }
}