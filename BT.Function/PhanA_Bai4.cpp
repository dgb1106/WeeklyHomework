#include <iostream>

using namespace std;

void passArray(int arr[]) {
    cout << arr << endl;
}

void passString(string s) {
    cout << &s << endl;
}

int main() {
    int arr[100];
    cout << arr << endl;
    // 0x57843ffce0
    passArray(arr);
    // 0x57843ffce0

    string s = "abcd";
    cout << &s << endl;
    // 0x6ae39ff500
    passString(s);
    // 0x6ae39ff6c0

    return 0;
}

// Mảng được truyền theo cơ chế pass by reference
// String được truyền theo cơ chế pass by value
