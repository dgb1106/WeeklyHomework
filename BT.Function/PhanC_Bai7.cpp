#include <bits/stdc++.h>

using namespace std;

void printTriangle(int n) {
    for (int i = 0; i < n; i++) {
        string s = "";
        s += string(n-i-1, ' ');
        s += string(2*i+1, '*');
        cout << s << endl;
    }
}

int main() {
    int row;
    cin >> row;

    printTriangle(row);

    return 0;
}