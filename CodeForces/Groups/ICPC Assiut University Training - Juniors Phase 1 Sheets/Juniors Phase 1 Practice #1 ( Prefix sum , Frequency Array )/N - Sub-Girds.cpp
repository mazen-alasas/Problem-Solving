///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, INF = 0x3f3f3f3f;
const double eps = 1e-9;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}


ll a[1002][1002];
int main() {
	IOS
	//Online();
	T {
		memset(a, 0, sizeof a);
		ll n, m, q; cin >> n >> m >> q;
		while(q--) {
			ll x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > x2) {
				swap(x1, x2);
			} if (y1>y2) {
				swap(y1, y2);
			}
			a[x1][y1]++;
			a[x1][y2 + 1]--;
			a[x2 + 1][y1]--;
			a[x2 + 1][y2 + 1]++;
		}
		for(ll i = 1; i <= n; i++) {
			for(ll j = 1; j <= m; j++) {
				a[i][j] += a[i][j - 1];
			}
		}
		for(ll i = 1; i <= m; i++) {
			for(ll j = 1; j <= n; j++) {
				a[j][i] += a[j - 1][i];
			}
		}

		ll ctr = 0;
		for(ll i = 1; i <= n; i++) {
			for(ll j = 1; j <= m; j++) {
				ctr += (!a[i][j]);
			}
		}
		cout << ctr << endl;
	}
	return 0;
}
