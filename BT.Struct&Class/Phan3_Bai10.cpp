#include <iostream>

using namespace std;

struct Array {
    int* array;

    Array (const int arr[5]) {
        array = new int[5];
        for (int i = 0; i < 5; i++) {
            array[i] = arr[i];
        }
    }
};

struct Point {
    int x, y;
    Point() {}
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

struct Triangle {
    Point A, B, C;
    Triangle(Point _A, Point _B, Point _C) {
        A = _A;
        B = _B;
        C = _C;
    }
};

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Array struct1(arr);
    Array struct2 = struct1;

    cout << arr << endl;

    for (int i = 0; i < 5; i++) {
        cout << struct1.array[i] << " ";
    }
    cout << endl;
    cout << struct1.array << endl;

    for (int i = 0; i < 5; i++) {
        cout << struct2.array[i] << " ";
    }
    cout << endl;
    cout << struct2.array << endl;

    //struct1.array va struct2.array la 2 dia chi giong het nhau

    Point p1(1, 1);
    Point p2(2, 4);
    Point p3(5, 3);
    Triangle triangle1(p1, p2, p3);
    Triangle triangle2 = triangle1;

    cout << &triangle1.A << endl;
    cout << &triangle2.A << endl;

    //2 dia chi giong het nhau

    return 0;
}