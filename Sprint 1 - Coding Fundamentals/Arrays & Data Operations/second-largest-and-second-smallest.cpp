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

    int largest = arr[0];
    int secondLargest = arr[0];

    int smallest = arr[0];
    int secondSmallest = arr[0];

    for (int i = 1; i < N; i++) {

        // Largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        // Smallest and second smallest
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Second Smallest = " << secondSmallest << endl;

    return 0;
}