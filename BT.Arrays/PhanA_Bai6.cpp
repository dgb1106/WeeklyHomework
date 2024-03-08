#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 30;
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = size-1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (arr[j-1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}