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

int main() {
	IOS
	//Online();
	ll n, m; cin >> n >> m;
	map<ll, ll> mp;
	for(ll i = 0; i < n; i++) {
		ll x; cin >> x;
		mp[i + 1] = x;
	}
	while(m--) {
		ll y, x, z; cin >> y >> x >> z;
		mp[y] -= z;
		mp[x] += z;
	}
	for(ll i = 0; i < n; i++) {
		if(mp[i + 1] < 0) {
			return !(cout << "NO");
		}
	}
	cout << "YES";
	return 0;
}
