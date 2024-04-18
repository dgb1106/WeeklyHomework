#include <iostream>

using namespace std;

int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char* reverse(const char a[]) {
    char* result = new char[100];

    char* ptr = result;

    for (int i = strlen(a) - 1; i >= 0; i--) {
        *ptr = a[i];
        ptr++;
    }

    *ptr = '\0';

    return result;
}

char* delete_char(const char a[], const char c) {
    char* result = new char[100];

    char* ptr = result;

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] != c) {
            *ptr = a[i];
            ptr++;
        }
    }

    *ptr = '\0';

    return result;
}

char* pad_right(const char a[]) {
    char* result = new char[100];

    char* ptr = result;

    for (int i = 0; i < strlen(a); i++) {
        *ptr = a[i];
        ptr++;
    }

    *ptr = ' ';
    
    ptr++;
    *ptr = '\0';

    return result;
}

char* pad_left(const char a[]) {
    char* result = new char[100];

    char* ptr = result;
    *ptr = ' ';

    for (int i = 0; i < strlen(a); i++) {
        ptr++;
        *ptr = a[i];
    }

    ptr++;
    *ptr = '\0';

    return result;
}

char* truncate(const char a[], const int n) {
    char* result = new char[100];
    char* ptr = result;

    int len = strlen(a);
    if (len > n) {
        for (int i = 0; i < n; i++) {
            *ptr = a[i];
            ptr++;
        }
        *ptr = '\0';
    }

    return result;
}

char* trim_left(const char a[]) {
    char* result = new char[100];
    char* ptr = result;

    int count = 0;
    while (a[count] == ' ' && count < strlen(a)) {
        count++;
    }

    for (int i = count; i < strlen(a); i++) {
        *ptr = a[i];
        ptr++;
    }

    *ptr = '\0';

    return result;
}

char* trim_right(const char a[]) {
    char* result = new char[100];
    char* ptr = result;

    int count = strlen(a)-1;
    while (a[count] == ' ' && count >= 0) {
        count--;
    }

    for (int i = 0; i <= count; i++) {
        *ptr = a[i];
        ptr++;
    }

    *ptr = '\0';

    return result;
}

int main() {
    char a[100] = "   HelloWorld    ";

    char* reversed = reverse(a);
    char* deleted = delete_char(a, 'l');
    char* padded_right = pad_right(a);
    char* padded_left = pad_left(a);
    char* truncated = truncate(a, 5);
    char* trimmed_left = trim_left(a);
    char* trimmed_right = trim_right(a);

    cout << reversed << endl;
    cout << deleted << endl;
    cout << padded_right << endl;
    cout << padded_left << endl;
    cout << truncated << endl;
    cout << trimmed_left << endl;
    cout << trimmed_right << endl;

    delete[] reversed;
    delete[] deleted;
    delete[] padded_right;
    delete[] padded_left;
    delete[] truncated;
    delete[] trimmed_left;
    delete[] trimmed_right;

    return 0;
}