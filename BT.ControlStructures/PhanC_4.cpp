#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s = "";
		s += string(i+1, ' ');
		s += string(2*n-2*i-1, '*');
		cout << s << endl;
	}
	return 0;
}