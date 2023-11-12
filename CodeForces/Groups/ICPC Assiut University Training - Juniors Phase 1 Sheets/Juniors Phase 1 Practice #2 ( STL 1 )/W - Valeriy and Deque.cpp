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
	ll n, q; cin >> n >> q;
	ll a[N]{}, mx = 0, ctr = 0;
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	pair<ll, ll> p[N];
	while(a[ctr + 1] != mx) {
		ctr++;
		p[ctr] = {a[ctr], a[ctr + 1]};
		a[n + ctr] = min(a[ctr], a[ctr + 1]);
		a[ctr + 1] = max(a[ctr], a[ctr + 1]);
	}
	while(q--) {
		ll m; cin >> m;
		if(m > ctr) {
			cout << mx << ' ' << a[ctr + 2 + (m - ctr - 1) % (n - 1)] << endl;
		} else {
			cout << p[m].first << ' ' << p[m].second << endl;
		}
	}
	return 0;
}
