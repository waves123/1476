#include <iostream>
using namespace std;

int main() {
	int E, S, M, e = 1, s = 1, m = 1, ans = 1;
	cin >> E >> S >> M;
	while (E != e || S != s || M != m) {
		ans++;
		if (e >= 15) e = 1;
		else e++;
		if (s >= 28) s = 1;
		else s++;
		if (m >= 19) m = 1;
		else m++;
	}
	cout << ans;
}