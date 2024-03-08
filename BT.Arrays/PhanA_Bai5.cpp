#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int n = 5;
    char c_str[n];
    cin.getline(c_str, n);
    cout << "_" << c_str << "_";
    return 0;
}