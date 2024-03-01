#include <bits/stdc++.h>

using namespace std;

struct Rect {
    int x, y;
    int w, h;
};

struct Ship {
    Rect coordinates;
    string id;
    int dx, dy;

    void move() {
        coordinates.x += dx;
        coordinates.y += dy;
    }
};

void display(const Ship& ship) {
    cout << ship.id << endl;
    cout << "(" << ship.coordinates.x << "," << ship.coordinates.y << ")";
}

int main() {
    Rect location;
    location.x = 1;
    location.y = 1;
    location.w = 3;
    location.h = 2;
    Ship ship;
    ship.coordinates = location;
    ship.id = "VN283";
    ship.dx = 5;
    ship.dy = 5;
    ship.move();
    display(ship);
    return 0;
}