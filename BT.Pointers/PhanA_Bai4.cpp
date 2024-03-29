#include <iostream>

using namespace std;

int  binarySearch(int* arr, int size, int k) {
    int left = 0;
    int right = size-1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == k) return mid;
        if (arr[mid] < k) left = mid + 1;
        else right = mid;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;

    cout << binarySearch(arr, size, k);
    
    return 0;
}