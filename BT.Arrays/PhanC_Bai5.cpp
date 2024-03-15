#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int spiralTable[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            spiralTable[i][j] = 0;
        }
    }

    int num = 0;
    int top = 0, bottom = x-1;
    int left = 0, right = y-1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            num++;
            spiralTable[top][i] = num;
        }
        top++;
        
        for (int i = top; i <= bottom; ++i) {
            num++;
            spiralTable[i][right] = num;
        }
        right--;

        for (int i = right; i >= left; --i) {
            num++;
            spiralTable[bottom][i] = num;
        }
        bottom--;

        for (int i = bottom; i >= top; --i) {
            num++;
            spiralTable[i][left] = num;
        }
        left++;
    }

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << spiralTable[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}