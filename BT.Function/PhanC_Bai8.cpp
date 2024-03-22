#include <bits/stdc++.h>

using namespace std;

// int rnd(double x) {
//     double decimal = x - floor(x);
//     if (decimal < 0.5) {
//         return floor(x);
//     }
//     return ceil(x);
// }

int rnd(double x) {
    int integer = static_cast<int>(x);
    double decimal = x - integer;
    if (decimal < 0.5) return integer;
    return integer+1;
}

int main() {
    double x;
    cin >> x;
    cout << rnd(x);
    return 0;
}