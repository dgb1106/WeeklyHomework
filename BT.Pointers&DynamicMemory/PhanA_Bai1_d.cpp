#include <iostream>
#include <cstring>

using namespace std;

char result[100];

char* concat(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char* result = new char[len1+len2];

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