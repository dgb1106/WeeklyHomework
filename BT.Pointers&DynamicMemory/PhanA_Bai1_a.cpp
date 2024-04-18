#include <iostream>
#include <cstring>

using namespace std;

char result[100];

char* concat(const char* str1, const char* str2) {
    
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

    char* newString = concat(str1, str2);

    cout << newString << endl;

    return 0;
}