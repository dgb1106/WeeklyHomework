#include <bits/stdc++.h>

using namespace std;

bool check(vector <int> arr) {
    unordered_set <int> seen;
    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            return true;
            break;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (check(arr) == true) cout << "yes";
    else cout << "no";
    return 0;
}