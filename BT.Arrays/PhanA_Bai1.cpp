#include <bits/stdc++.h>

using namespace std;

const int n = 5;
int arr1[n];
int arr3[n] = {1, 2, 3, 4};
// int arr5[3] = {1, 2, 3, 4};
int arr7[] = {1, 2, 3, 4};

int main() {
    int arr2[n];

    // mang khai bao ngoai ham main va khong khoi tao
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // mang khai bao trong ham main va khong khoi tao
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr4[n] = {1, 2, 3, 4};
    // mang khai bao ngoai ham main voi n > 4
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    // mang khai bao trong ham main voi n > 4
    for (int i = 0; i < n; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;

    // mang khai bao ngoai ham main voi n < 4
    // chuong trinh loi
    // for (int i = 0; i < 3; i++) {
    //     cout << arr5[i] << " ";
    // }
    // cout << endl;

    // int arr6[3] = {1, 2, 3 ,4};
    // mang khai bao trong ham main voi n < 4
    // chuong trinh loi
    // for (int i = 0; i < 3; i++) {
    //     cout << arr6[i] << " ";
    // }
    // cout << endl;

    // khai bao va khoi tao ngoai ham main dang int a[]
    for (int i = 0; i < sizeof(arr7)/sizeof(arr7[0]); i++) {
        cout << arr7[i] << " ";
    }
    cout << endl;

    int arr8[] = {1, 2, 3, 4};
    // khai bao va khoi tao trong ham main dang int a[]
    for (int i = 0; i < sizeof(arr8)/sizeof(arr8[0]); i++) {
        cout << arr8[i] << " ";
    }
    cout << endl;

    return 0;
}