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
	ll n, m, q; cin >> n >> m >> q;
	ll a[n + 2][m + 2]{};
	for(ll i = 1; i <= n; i++) {
		for(ll  j = 1; j <= m; j++)
			cin >> a[i][j];
	}
	for(ll i = 1; i <= n; i++) {
		for(ll j = 1; j <= m; j++)
			a[i][j] += a[i][j - 1];
	}
	for(ll i = 1; i <= m; i++) {
		for(ll j = 1; j <= n; j++)
			a[j][i] += a[j - 1][i];
	}
	while(q--) {
		ll l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		cout << a[l2][r2] - a[l2][r1 - 1] - a[l1 - 1][r2] + a[l1 - 1][r1 - 1] << endl;
	}
	return 0;
}
