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

void passByValue(Point p) {
    cout << &p << endl;
}

void passByReference(Point& p) {
    cout << &p << endl;
}

int main() {
    Point point(2, 2);
    cout << &point << endl; //in ra dia chi cua bien kieu Point
    passByValue(point); //in ra dia chi khi truyen tham tri, dia chi nay khac voi dia chi ban dau
    passByReference(point); //dia chi giong voi dia chi ban dau khi truyen tham chieu
    return 0;
}