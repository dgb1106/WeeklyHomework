#include <bits/stdc++.h>

using namespace std;

int count_substring(const char* str1, const char* str2, int len_str1, int len_str2) {
    int count = 0;
    for (int i = 0; i <= len_str2 - len_str1; i++) {
        char temp[10];
        int j = 0;
        while (j < len_str1) {
            temp[j] = str2[i+j];
            j++;
        }
        temp[j] = '\0';
        if (strcmp(str1, temp) == 0) count++;
    }
    return count;
}

int main() {
    const char* str1 = "abc";
    const char* str2 = "abcabcabcabcabc";
    int len_str1 = strlen(str1);
    int len_str2 = strlen(str2);
    cout << count_substring(str1, str2, len_str1, len_str2);
    return 0;
}