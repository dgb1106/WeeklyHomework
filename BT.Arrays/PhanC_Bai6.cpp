#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int magicMatrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicMatrix[i][j] = 0;
        }
    }

    int num = 1;
    int x = 0, y = n/2;

    while (num <= n*n) {
        magicMatrix[x][y] = num;
        num++;

        int new_x = (x-1+n) % n;
        //+n de dam bao so duong
        int new_y = (y+1) % n;

        if (magicMatrix[new_x][new_y] == 0) {
            x = new_x;
            y = new_y;
        } else {
            x = (x+1) % n;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << magicMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}