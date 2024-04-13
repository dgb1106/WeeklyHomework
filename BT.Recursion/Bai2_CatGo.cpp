#include <iostream>
#include <vector>

using namespace std;

int maxTotalPrice(const vector <int> prices, int n) {
    int maxValue = 0;
    for (int i = 1; i <= n; i++) {
        int value = maxTotalPrice(prices, n - i) + prices[i - 1];
        maxValue = max(value, maxValue);
    }
    return maxValue;
}

int main() {
    int n;
    cin >> n;

    vector <int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << maxTotalPrice(prices, n) << endl;

    return 0;
}