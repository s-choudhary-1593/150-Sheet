#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    // for loop to check if N is prime using break statement
    int i;
    for (i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            break;
        }
    }
    if (i > sqrt(N))
    {
        cout << "The number is Prime: " << N << endl;
    }
    else
    {
        cout << "The number is not Prime: " << N << endl;
    }

    //using continue statement to check if N is prime
    for(i=3;i<= sqrt(N);i++){
        if(i>2 && i%2==0){
            continue;
        }
    }
    if (N%i==0)
    {
        cout << "The number is not Prime: " << N << endl;
    }
    else
    {
        cout << "The number is Prime: " << N << endl;
    }
    
}