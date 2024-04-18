#include <iostream>

using namespace std;

int main() {
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; //Lỗi con trỏ đã bị giải phóng bộ nhớ, trong khi con trỏ p2 vẫn đang chỉ tới địa chỉ của p 
    *p2 = 100;
    cout << *p2;
    delete p2;

}