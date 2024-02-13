///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	// Online();
	ll n, m, ctr = 0; cin>>n>>m;
	char a[n][m];
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'x') {
				ctr++;
			}
		}
	}
	ll x, y; cin >> x >> y;
	x--, y--;
	char p = 'x';
	if (ctr == n * m) {
		cout << "yes";
	} else if (p == a[x - 1][y] && p == a[x + 1][y] && p == a[x][y - 1] && p == a[x][y + 1] && p == a[x + 1][y - 1] && p == a[x - 1][y + 1] && p == a[x - 1][y - 1] && p == a[x + 1][y + 1]) {
		cout << "yes";
	} else {
		cout << "no";
	}
	return 0;
}
