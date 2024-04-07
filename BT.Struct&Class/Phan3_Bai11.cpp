#include <iostream>
#include <cstring>

using namespace std;

struct String {
    int n;
    char* str;

    String (const char* s) {
        n = strlen(s);
        str = new char[n+1];
        for (int i = 0; i < n; i++) {
            str[i] = s[i];
        }
        str[n] = '\0';
    }

    ~String() {
        delete[] str;
    }

    void print() {
        cout << str << endl;
    }

    void append(const char* t) {
        int m = strlen(t);
        char* temp = new char[n+m];
        for (int i = 0; i < n; i++) {
            temp[i] = str[i];
        }
        for (int i = 0; i < m; i++) {
            temp[n+i] = t[i];
        }
        temp[n+m] = '\0';
        delete[] str;
        str = temp;
        n += m;
        delete[] temp;
    }
};

int main() {
    String s("Hello");
    s.print();
    s.append(", how are you today?");
    s.print();
    return 0;
}