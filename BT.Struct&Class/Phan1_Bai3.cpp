#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
};

Point mid_point(const Point& a, const Point& b) {
    Point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

int main() {
    Point a;
    a.x = 1;
    a.y = 2;
    Point b;
    b.x = 3;
    b.y = 4;
    cout << "Mid point: (" << mid_point(a, b).x << "," << mid_point(a, b).y << ")";
    return 0;
}