#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
};

void print(Point p) {
    cout << "(" << p.x << "," << p.y << ")";
}

int main() {
    Point point;
    point.x = 10;
    point.y = 20;
    print(point);
    return 0;
}