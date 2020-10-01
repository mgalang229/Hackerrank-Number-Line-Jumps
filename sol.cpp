#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	bool ok = false;
	for (int i = 0; i < 10000; i++) {
		x1 += v1;
		x2 += v2;
		if (x1 == x2) {
			ok = true;
			break;
		}
	}
	cout << (ok ? "YES" : "NO") << '\n';
	return 0;
}
