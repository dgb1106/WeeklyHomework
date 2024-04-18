#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* str1, const char* str2) {
    char result[100];

    char* ptr = result;

    while (*str1 != '\0') {
        *ptr = *str1;
        ptr++;
        str1++;
    }

    while (*str2 != '\0') {
        *ptr = *str2;
        ptr++;
        str2++;
    }

    *ptr = '\0';

    return result;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    cout << concat(str1, str2) << endl;

    return 0;
}