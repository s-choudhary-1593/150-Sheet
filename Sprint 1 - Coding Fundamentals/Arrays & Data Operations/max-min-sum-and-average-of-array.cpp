#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter size: ";
    cin >> N;

    int arr[N];

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for (int i = 0; i < N; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }

        sum += arr[i];
    }

    double average = (double)sum / N;

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}