#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
   // 0x84c41ffb9c
}
void g(int yval)
{
   int y;
   cout << &y << endl;
   // 0x84c41ffb9c
}
int main()
{
   f(7);
   g(11);
   return 0;
} 

// Khi được gọi trong function call stack, hàm f và g có cùng vị trí ở trong stack, cùng nhận tham số kiểu int, đều có một biến địa phương ở đầu hàm
// Do đó, địa chỉ của biến x và y trùng nhau