#include <bits/stdc++.h>

using namespace std;

int generateRandom(int n) {
    srand(time(NULL));
    return rand() % n;
}

int main() {
    int n;
    cin >> n;
    cout << generateRandom(n);
}