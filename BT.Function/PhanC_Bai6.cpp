#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    int min = a;
    if (a > b) min = b;
    int result = 1;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    if (gcd(a, b) == 1) cout << "coprime";
    else cout << "not coprime";

    return 0;
}