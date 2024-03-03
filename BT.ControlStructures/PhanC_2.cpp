#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s = "";
		s += string(i, ' ');
		s += string(n-i, '*');
		cout << s << endl;
	}
	return 0;
}