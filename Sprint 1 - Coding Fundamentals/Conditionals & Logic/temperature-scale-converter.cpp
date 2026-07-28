#include <iostream>
using namespace std;

int main()
{
    float T;
    char Scale;
    cout << "Enter tempurature: ";
    cin >> T;
    cout << "Enter Scale (C/F/K): ";
    cin >> Scale;

    if (Scale == 'C' || Scale == 'c')
    {
        float F = (T * 9 / 5) + 32;
        float K = (T + 273.15);
        cout << "Fahrenheit: " << F<<endl;
        cout << "Kelvin: " << K<<endl;
    }
    else if (Scale == 'F' || Scale == 'f')
    {
        float C = (T - 32) * 5 / 9;
        float K = (C + 273.15);
        cout << "Celcius: " << C << endl;
        cout << "Kelvin: " << K << endl;
    }
    else if (Scale == 'K')
    {
        float C = (T - 273.15);
        float F = (C * 9 / 5) + 32;
        cout << "Celcius: " << C << endl;
        cout << "Fahrenheit: " << F << endl;
    }
    else
    {
        cout << "Invalid Scale";
    }
}
