#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < (int) s.size() - 1; i++) {
			// count the number of times where 1 will transition to 0 and vice-versa
			if (s[i] != s[i + 1]) {
				cnt++;
			}
		}
		// edge case: add 1 to the final answer if the first door is closed
		cout << (s[0] == '1' ? cnt : cnt + 1) << '\n';
	}
	return 0;
}
