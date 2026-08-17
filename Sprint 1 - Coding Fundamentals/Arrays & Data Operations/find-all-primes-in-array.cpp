#include <iostream>
using namespace std;

bool isPrime(int n) {

    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    // Filter prime numbers and calculate their sum
    for (int i = 0; i < n; i++) {

        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
            sum += arr[i];
        }
    }

    cout << endl;
    cout << "Sum of prime numbers: " << sum << endl;

    return 0;
}