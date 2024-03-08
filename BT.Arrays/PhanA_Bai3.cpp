#include <bits/stdc++.h>

using namespace std;

int main() {
    // cach 1
    char daytab_1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };  
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab_1[i][j] << " ";
        }
        cout << endl;
    }
    // cach 2
    char daytab_2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };  
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab_2[i][j] << " ";
        }
        cout << endl;
    }

    char daytab_3[2][12] = {
        {31,28,31,30,31,30},
        {31,29,31,30,31,30,31,31,30}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab_3[i][j] << " ";
        }
        cout << endl;
    }
    char daytab_4[2][12] = {
        31,28,31,30,31,30,
        31,29,31,30,31,30,31,31,30
    };  
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab_4[i][j] << " ";
        }
        cout << endl;
    }

    char daytab_5[][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };  
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab_5[i][j] << " ";
        }
        cout << endl;
    }
    // chuong trinh loi
    // char daytab_5[2][] = {
    //     {31,28,31,30,31,30,31,31,30,31,30,31},
    //     {31,29,31,30,31,30,31,31,30,31,30,31}
    // };  
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         cout << (int)daytab_5[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // chuong trinh loi
    // char daytab_5[][] = {
    //     {31,28,31,30,31,30,31,31,30,31,30,31},
    //     {31,29,31,30,31,30,31,31,30,31,30,31}
    // };  
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         cout << (int)daytab_5[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}