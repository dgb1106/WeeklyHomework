#include <bits/stdc++.h>

using namespace std;

char mineMap[10][10];
char playMap[10][10];
bool lose = false;

void createMap(int m, int n, int K) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mineMap[i][j] = '.';
        }
    }

    int mineCount = 0;
    while (mineCount < K) {
        int row = rand() % m;
        int col = rand() % n;
        if (mineMap[row][col] == '.') {
            mineMap[row][col] = '*';
            mineCount++;
        }
    }
}

void createPlayMap(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            playMap[i][j] = '.';
        }
    }
}

void print(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mineMap[i][j] << " ";
        }
        cout << endl;
    }
}

void printPlayMap(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << playMap[i][j] << " ";
        }
        cout << endl;
    }
}

bool valid(int row, int col, int max_rows, int max_cols) {
    return (row >= 0 && col >= 0 && row < max_rows && col < max_cols);
}

void play(int x, int y, int m, int n) {
    if (mineMap[x][y] == '*') {
        lose = true;
        cout << "YOU'RE DEAD!" << endl;
        print(m, n);
    } else {
        int count = 0;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (valid(x+i, y+j, m, n) && (i != 0 || j != 0) && (mineMap[x+i][y+j] ==  '*')) {
                    count++;
                }
            }
        }
        char mineCount = '0' + count;
        playMap[x][y] = mineCount;
        printPlayMap(m, n);
    }
}

int main() {
    int m, n, K;
    cin >> m >> n >> K;

    srand(time(NULL));

    createMap(m, n, K);
    createPlayMap(m, n);
    
    while (!lose) {
        int x, y;
        cin >> x >> y;

        play(x, y, m, n);
    }

    return 0;
}