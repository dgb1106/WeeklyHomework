#include <iostream>

using namespace std;

int main() {
    int num = 10;

    int* ptr = new int;
    ptr = &num;

    delete ptr;

    // Chương trình gặp lỗi vì giải phóng bộ nhớ không được cấp phát động, mà là một biến địa phương trên stack memory

    // cout << num << endl;
    // cout << *ptr << endl;

    return 0;
}