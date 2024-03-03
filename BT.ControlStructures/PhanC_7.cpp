#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a << " ";
    do {
        int b = a;
        cin >> a;
        if (a == b) continue;
        else {
            cout << a << " ";
        }
    } while (a >= 0);
    return 0;
}