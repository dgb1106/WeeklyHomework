#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (checkPrime(i) == true) {
            cout << i << " ";
        }
    }

    return 0;
}