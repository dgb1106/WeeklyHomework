#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
};

void pass_by_value(Point p) {
    p.x = 10;
    p.y = 20;
}

void pass_by_reference(Point &p) {
    p.x = 10;
    p.y = 20;
}

int main() {
    Point point;
    point.x = 1;
    point.y = 2;
    pass_by_value(point);
    cout << "(" << point.x << "," << point.y << ")" << endl;
    pass_by_reference(point);
    cout << "(" << point.x << "," << point.y << ")" << endl;
    return 0;
}