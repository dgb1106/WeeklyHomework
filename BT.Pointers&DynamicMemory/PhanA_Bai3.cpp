#include <iostream>

using namespace std;

int main() {
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; //lỗi vì giá trị của toán hạng delete phải là giá trị con trỏ thu được từ một biểu thức new array trước đó (là con trỏ a)
    cerr << "a after deleting c:" << "-" << a << "-" << endl; //Lệnh cerr này không chạy

}