#include <iostream>
#include <cmath>

using namespace std;

void move(int n, char a, char b) {
    cout << "chuyen dia thu " << n << " tu coc " << a << " sang coc " << b << endl;
}

void HanoiTower(int n, char a, char b, char c) {
    if (n == 1) move(1, a, c);
    else {
        HanoiTower(n-1, a, c, b);
        move(n, a, c);
        HanoiTower(n-1, b, a, c);
    }
}

int steps(int n) {
    return pow(2, n) - 1;
    // so buoc de thuc hien doi voi truong hop 3 cot la 2^n - 1
    // T(n) = 2T(n-1) + 1
    // T(n) = 2.(2.T(n-2) + 1) + 1
    // T(n) = 2^(n-1) + 2^n + ... + 2 + 1
    // T(n) = 2^n - 1
}

int main() {
    int n;
    char a = 'A', b = 'B', c = 'C';
    cin >> n;
    //HanoiTower(n, a, b, c);
    cout << steps(n) << endl;
    return 0;
}