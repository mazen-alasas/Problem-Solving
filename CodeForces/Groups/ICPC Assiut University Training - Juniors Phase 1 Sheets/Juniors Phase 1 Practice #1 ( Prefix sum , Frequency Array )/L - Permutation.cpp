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
		freopen("mex.in", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	Online();
	T {
		ll n, q; cin >> n >> q;
		ll a[n];
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]] = i + 1;
		}
		while(q--) {
			ll l, r; cin >> l >> r;
			for(ll i = 0; i <= n; i++) {
				if(mp[i + 1] < l || mp[i + 1] > r || mp.find(i + 1) == mp.end()) {
					cout << i + 1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}
