#include <iostream>

using namespace std;

int strlen(const char* s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

char* reverse(char a[]) {
    int n = strlen(a);
    int count = 0;
    while (count < n) {
        char temp = a[count];
        a[count] = a[n-1];
        a[n-1] = temp;
        count++;
        n--;
    }
    return a;
}

char* delete_char(char a[], char c) {
    int n = strlen(a);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != c) {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
    return a;
}

char* pad_right(char a[], int n) {
    int len = strlen(a);
    if (len >= n) return a;
    while (len < n) {
        a[len] = ' ';
        len++;
    }
    a[len] = '\0';
    return a;
}

char* pad_left(char a[], int n) {
    int len = strlen(a);
    if (len >= n) return a;
    
    int padding = n - len;
    for (int i = len-1; i >= 0; i--) {
        a[i + padding] = a[i];
    }

    for (int i = 0; i < padding; i++) {
        a[i] = ' ';
    }

    a[n] = '\0';
    return a;
}

char* truncate(char a[], int n) {
    int len = strlen(a);
    if (len <= n) return a;
    a[n+1] = '\0';
    return a;
}

bool isPalindrome(char a[]) {
    int left = 0;
    int right = strlen(a) - 1;
    while (left < right) {
        if (a[left] != a[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

char* trim_left(char a[]) {
    if (a[0] != ' ') return a;
    int count = 0;
    int len = strlen(a);
    while (a[count] == ' ' && count < len) {
        count++;
    }
    int newLen = len - count;
    for (int i = 0; i < len; i++) {
        a[i] = a[count + i];
    }
    a[newLen] = '\0';
    return a;
}

char* trim_right(char a[]) {
    int len = strlen(a);
    if (a[len-1] != ' ') return a;
    int count = len-1;
    while (a[count] == ' ') {
        count--;
    }
    count++;
    a[count] = '\0';
    return a;
}

int main() {
    char a[100] = "    Hello    ";

    // char* reversed = reverse(a);
    // cout << reversed << endl;

    // char* deleted = delete_char(a, 'l');
    // cout << deleted << endl;

    // char* padded_right = pad_right(a, 10);
    // cout << padded_right << endl;
    
    // char* padded_left = pad_left(a, 10);
    // cout << padded_left << endl;

    // char* truncated = truncate(a, 2);
    // cout << truncated << endl;

    // bool check = isPalindrome(a);
    // cout << check << endl;

    // char* trimmed_left = trim_left(a);
    // cout << trimmed_left << endl;

    char* trimmed_right = trim_right(a);
    cout << trimmed_right << endl;

    return 0;
}