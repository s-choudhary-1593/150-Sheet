#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {

    k = k % n;

    // 1. Reverse the whole array
    reverseArray(arr, 0, n - 1);

    // 2. Reverse the first K elements
    reverseArray(arr, 0, k - 1);

    // 3. Reverse the remaining N-K elements
    reverseArray(arr, k, n - 1);
}

int main() {
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Rotated array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}