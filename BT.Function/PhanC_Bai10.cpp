#include <bits/stdc++.h>

using namespace std;

void printTriplet(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; j < n; j++) {
                sum = arr[i] + arr[j] + arr[k];
                if (sum % 25 == 0) {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    srand(time(NULL));

    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50;
        cout << arr[i] << " ";
    }
    cout << endl;

    printTriplet(arr, n);

    return 0;
}