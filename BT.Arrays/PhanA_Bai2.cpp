#include <bits/stdc++.h>

using namespace std;

const int n = 5;
char c_string_1[n];
// char c_string_3[3] = "abcd";
char c_string_5[5] = "abcd";
// char c_string_7[4] = "abcd";
char c_string_9[] = "abcd";

int main() {
    // khai bao mang ngoai ham main va khong khoi tao
    for (int i = 0; i < n; i++) {
        cout << c_string_1[i];
    }
    cout << endl;
    cout << c_string_1 << endl;

    // khai bao mang trong ham main va khong khoi tao
    char c_string_2[n];
    for (int i = 0; i < n; i++) {
        cout << c_string_2[i];
    }
    cout << endl;
    cout << c_string_2 << endl;

    // khai bao mang ngoai ham main va khoi tao voi n < 4
    // chuong trinh loi
    // for (int i = 0; i < 3; i++) {
    //     cout << c_string_3[i];
    // }
    // cout << endl;
    // cout << c_string_3 << endl;

    // khai bao mang trong ham main va khoi tao voi n < 4
    // chuong trinh loi
    // char c_string_4[3] = "abcd";
    // for (int i = 0; i < 3; i++) {
    //     cout << c_string_4[i];
    // }
    // cout << endl;
    // cout << c_string_4 << endl;

    // khai bao mang ngoai ham main va khoi tao voi n > 4
    for (int i = 0; i < 5; i++) {
        cout << c_string_5[i] << " ";
    }
    cout << endl;
    cout << c_string_5 << endl;

    // khai bao mang trong ham main va khoi tao voi n > 4
    char c_string_6[5] = "abcd";
    for (int i = 0; i < 6; i++) {
        cout << c_string_6[i] << " ";
    }
    cout << endl;
    cout << c_string_6 << endl;

    // khai bao va khoi tao mang ngoai ham main voi n = 4
    // for (int i = 0; i < 4; i++) {
    //     cout << c_string_7[i] << " ";
    // }
    // cout << endl;
    // cout << c_string_7 << endl;

    // khai bao va khoi tao mang trong ham main voi n = 4
    // char c_string_8[4] = "abcd";
    // for (int i = 0; i < 4; i++) {
    //     cout << c_string_8[i] << " ";
    // }
    // cout << endl;
    // cout << c_string_8 << endl;

    // khai bao va khoi tao mang ngoai ham main dang a[]
    int size_9 = sizeof(c_string_9)/sizeof(c_string_9[0]);
    cout << size_9 << endl;
    for (int i = 0; i < size_9; i++) {
        cout << c_string_9[i] << " ";
    }
    cout << endl;
    cout << c_string_9 << endl;

    //khao bao va khoi tao mang trong ham main dang a[]
    char c_string_10[] = "abcd";
    int size_10 = sizeof(c_string_10)/sizeof(c_string_10[0]);
    cout << size_10 << endl;
    for (int i = 0; i < size_10; i++) {
        cout << c_string_10[i] << " ";
    }
    cout << endl;
    cout << c_string_10 << endl;

    return 0;
}