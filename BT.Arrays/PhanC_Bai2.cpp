#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (check(s) == true) cout << "Yes";
    else cout << "No";
    return 0;
}