#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int N)
{
    if (N < 2)
    {
        return false;
    }
    for(int i=2;i<=sqrt(N);i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int A, B;
    cout << "Enter Range: ";
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}