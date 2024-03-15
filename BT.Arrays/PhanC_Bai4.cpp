#include <bits/stdc++.h>

using namespace std;

bool isValid(int row, int col, int rows, int cols) {
    return row >= 0 && col >= 0 && row < rows && col < cols;
}

int countMines(vector <vector<char>> map, int row, int col, int rows, int cols) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (isValid(row+i, col+j, rows, cols) && (i != 0 || j != 0) && (map[row+i][col+j] == '*')) count++;
        }
    }
    return count;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector <vector <char>> map(rows, vector <char> (cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> map[i][j];
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (map[i][j] == '*') cout << "* ";
            else cout << countMines(map, i, j, rows, cols) << " ";
        }
        cout << endl;
    }

    return 0;
}