#include <iostream>

using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << count_even(arr, 5) << endl;
    cout << count_even(arr + size - 5, 5);

    return 0;
}