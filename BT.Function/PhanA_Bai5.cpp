#include <iostream>

using namespace std;

int main() {
    int a;
    cout << &a << endl;
    // 0xd13f1ff6f4
    int& b = a;
    cout << &b << endl;
    // 0xd13f1ff6f4

    // Biến tham chiếu và biến nó chiếu tới là cùng một biến trong bộ nhớ

    // int& c;
    // cout << &c << endl;
    // Không thể khai báo biến tham chiếu mà chưa chiếu ngay đến một biến thường

    int c;
    cout << &c << endl;
    // 0x92447ff7c0
    b = c;
    cout << &b << endl;
    // 0x92447ff7c4
    // Địa chỉ của biến tham chiếu b vẫn trùng với địa chỉ của biến a, do đó không thể chiếu một biến tham chiếu tới một biến khác

    return 0;
}