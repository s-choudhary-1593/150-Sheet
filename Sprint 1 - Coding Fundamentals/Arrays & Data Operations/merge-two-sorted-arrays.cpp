#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int arr2[m];

    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int result[n + m];

    int i = 0;
    int j = 0;
    int k = 0;

    // Compare elements from both arrays
    while (i < n && j < m) {

        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        }
        else {
            result[k] = arr2[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of arr1
    while (i < n) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2
    while (j < m) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged array: ";

    for (int i = 0; i < n + m; i++) {
        cout << result[i] << " ";
    }

    return 0;
}