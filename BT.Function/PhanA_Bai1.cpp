#include <iostream>

using namespace std;

int main() {
    int x;
    char c;
    int a[100];
    char b[100];
    int y;
    char z;

    cout << &x << endl;
    cout << (void*)&c << endl;
    cout << &a[0] << " " << &a[1] << " " << &a[2] << endl;
    cout << (void*)&b[0] << " " << (void*)&b[1] << " " << (void*)&b[2] << endl;
    cout << &y << endl;
    cout << (void*)&z << endl;

    return 0;
}

// Địa chỉ của 3 phần tử liên tiếp của mảng a mỗi phần tử cách nhau 4 ô nhớ (vì kiểu dữ liệu int chiếm 4 byte)
// Địa chỉ của 3 phần tử liên tiếp của mảng b mỗi phần tử cách nhau 1 ô nhớ (vì kiểu dữ liệu char chiếm 1 byte)
// Các biến trước mảng có địa chỉ liên tiếp nhau, sau mảng cũng vậy