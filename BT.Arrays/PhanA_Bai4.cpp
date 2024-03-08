#include <bits/stdc++.h>

using namespace std;

const int n = 5;

int main() {
    char array[5] = {'a', 'b', 'c', 'd', '\0'};
    char c = 'x';
    char d = 'y';
    cout << array[5] << " " << array[-1] << " " << array[6] << endl;
    array[5] = 'e';
    array[6] = 'f';
    array[-1] = '@';
    cout << c << " " << d << endl;
    int two_dimension_array[3][6] = {
        {0, 1, 2, 3, 4, 5},
        {6, 7, 8, 9},
        {10, 11, 12, 13}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << two_dimension_array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}