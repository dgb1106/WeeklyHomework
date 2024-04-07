#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

int main() {
    Point point(2, 2);
    cout << &point.x << endl << &point.y;
    //0x631c9ff9c8
    //0x631c9ff9cc
    //2 o nho lien tiep
    return 0;
}