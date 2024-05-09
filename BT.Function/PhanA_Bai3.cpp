#include <iostream>

using namespace std;

void passByValue(int a) {
    cout << &a << endl;
}

void passByReference(int &a) {
    cout << &a << endl;
}

int main() {
    int a;
    cout << &a << endl;
    // 0x1f455ffc0c
    passByValue(a);
    // 0x1f455ffbe0
    passByReference(a);
    // 0x1f455ffc0c
    return 0;
}

// Địa chỉ của biến a và tham số a khi truyền tham chiếu là giống nhau => là một biến
// Địa chỉ của biến a và tham số a khi truyền tham trị là khác nhau => là hai biến khác nhau