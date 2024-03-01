#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
};

struct Rect {
    int xx, yy;
    int w, h;

    bool contains(const Point& p) const {
        if ((p.x >= xx && p.x <= xx+w) && (p.y >= yy && p.y <= yy+h)) return true;
        return false;
    }
};

int main() {
    Rect rectangle;
    cin >> rectangle.xx >> rectangle.yy >> rectangle.w >> rectangle.h;
    Point point;
    cin >> point.x >> point.y;
    if (rectangle.contains(point) == true) cout << "true";
    else cout << "no";
    return 0;
}