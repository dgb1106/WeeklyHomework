#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int number;
    cin >> number;
    if (checkPrime(number) == true) cout << "yes";
    else cout << "no";
    return 0;
}