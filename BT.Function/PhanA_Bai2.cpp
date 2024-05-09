#include <iostream>

using namespace std;

int factorial(int x) {
    cout << "x = " << x << " at " << &x << endl;

    int result = x;
    if (x == 1) return 1;
    result *= factorial(x-1);
    return result;
}

int main() {
    cout << factorial(4);
    return 0;
}

// Khi hàm đệ quy factorial(x) được gọi, giá trị và địa chỉ của tham số x thay đổi theo từng lần gọi
// Địa chỉ của tham số x giảm dần vì trong function call stack hàm được gọi trước thì sẽ ở địa chỉ cao hơn
// Kích thước của một stack frame cho hàm factorial là 40 byte