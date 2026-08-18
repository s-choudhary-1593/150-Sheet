#include <iostream>
using namespace std;

int main() {

    int N;

    cout << "Enter N: ";
    cin >> N;

    int arr[N];

    cout << "Enter elements: ";

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long expectedSum = 0;
    long long actualSum = 0;

    long long expectedSquareSum = 0;
    long long actualSquareSum = 0;

    // Calculate expected and actual sums
    for (int i = 0; i < N; i++) {

        expectedSum += (i + 1);
        actualSum += arr[i];

        expectedSquareSum += (long long)(i + 1) * (i + 1);
        actualSquareSum += (long long)arr[i] * arr[i];
    }

    // Missing - Duplicate
    long long difference = expectedSum - actualSum;

    // Missing² - Duplicate²
    long long squareDifference =
        expectedSquareSum - actualSquareSum;

    // Missing + Duplicate
    long long sum = squareDifference / difference;

    // Solve the two equations
    long long missing = (difference + sum) / 2;
    long long duplicate = sum - missing;

    cout << "Missing number: " << missing << endl;
    cout << "Duplicate number: " << duplicate << endl;

    return 0;
}