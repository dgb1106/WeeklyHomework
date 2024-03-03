#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << i+1 << " ";
        arr[i] = i+1;
    }
    cout << endl;
    for (int i = 1; i < n; i++) {
        int tmp = arr[0];
        for (int j = 1; j < n; j++) {
            arr[j-1] = arr[j];
        }
        arr[n-1] = tmp;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}