#include <iostream>
#include <map>
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

    map<int, int> frequency;

    for (int i = 0; i < N; i++) {
        frequency[arr[i]]++;
    }

    for (auto x : frequency) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}