#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cout << "Enter rows: ";
    cin >> M;
    cout << "Enter columns: ";
    cin >> N;

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j == 1 || i == 1 || i == M || j == N)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}