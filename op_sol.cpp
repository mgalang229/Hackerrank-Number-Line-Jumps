#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	if (v1 <= v2) {
		cout << "NO\n";
	} else {
		if ((x2 - x1) % (v1 - v2) == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
