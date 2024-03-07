#include <bits/stdc++.h>

using namespace std;

bool check_mirror(string s) {
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-i-1]) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (check_mirror(to_string(i)) == true) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}