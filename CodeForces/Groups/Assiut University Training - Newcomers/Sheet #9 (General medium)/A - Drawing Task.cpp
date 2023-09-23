///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.in", "r", stdin);
		freopen("output.out", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	ll n, m, q; cin >> n >> m >> q;
	char a[n][m];
	for(ll x = 0; x < n; x++) {
		for(ll y = 0; y < m; y++)
			a[x][y] = '.';
	}
	while(q--) {
		ll i, j, s, e; char c;
		cin >> i >> j >> s >> e >> c;
		for(ll x = min(i, s) - 1; x < max(i, s); x++) {
			for(ll y = min(j, e) - 1; y < max(j, e); y++)
				a[x][y] = c;
		}
	}
	for(ll x = 0; x < n; x++) {
		for(ll y = 0; y < m; y++)
			cout << a[x][y];
		cout << endl;
	}
	return 0;
}

