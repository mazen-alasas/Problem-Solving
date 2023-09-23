///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e6 + 7, INF = 0x3f3f3f3f;
const double eps = 1e-9;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	ll n, m, k;
	cin >> n >> m >> k;
	ll a[n + 1][m + 1];
	for(ll i = 1; i <= n; i++) {
		for(ll j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	ll aR[n + 1], aC[m + 1];
	for(ll i = 1; i <= n; aR[i] = i, i++);
	for(ll i = 1; i <= m; aC[i] = i, i++);
	while(k--) {
		char c;
		ll x, y; cin >> c >> x >> y;
		if(c == 'g') {
			ll r = aR[x], c = aC[y];
			cout << a[r][c] << endl;
		} else if(c == 'r') {
			swap(aR[x], aR[y]);
		} else if(c == 'c') {
			swap(aC[x], aC[y]);
		}
	}

	return 0;
}
