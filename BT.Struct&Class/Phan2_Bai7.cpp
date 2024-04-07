#include <bits/stdc++.h>

using namespace std;

struct Rect {
    int x, y;
    int w, h;
    Rect() {}
    Rect(int _x, int _y, int _w, int _h) {
        x = _x;
        y = _y;
        w = _w;
        h = _h;
    }
};

struct Ship {
    Rect coordinates;
    string id;
    int dx, dy;
    Ship(Rect _coordinates, string _id, int _dx, int _dy) {
        coordinates = _coordinates;
        id = _id;
        dx = _dx;
        dy = _dy;
    }

    void move() {
        coordinates.x += dx;
        coordinates.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "(" << ship.coordinates.x << "," << ship.coordinates.y << ")";
}

int main() {
    Rect rect_1(1, 1, 2, 2);
    Rect rect_2(4, 4, 2, 2);
    Ship ship1(rect_1, "01", 3, 3);
    Ship ship2(rect_2, "02", 2, 2);
    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        cout << " ";
        display(ship2);
        cout << endl;
        loop++;
    }
    return 0;
}