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
	ll n, l, r, x; cin >> n >> l >> r >> x;
	ll a[n], ctr = 0;
	for(ll i = 0; i < n; cin >> a[i++]);
	for(ll subs = 0; subs < (1 << n); subs++) {
		ll sum = 0, mx = 0, mn = LLONG_MAX;
		for(ll i = 0; i < n; i++) {
			if((subs >> i) & 1) {
				sum += a[i];
				mn = min(mn, a[i]);
				mx = max(mx, a[i]);
			}
		}
		if(sum >= l && sum <= r && mx - mn >= x) {
			ctr++;
		}
	}
	cout << ctr;
	return 0;
}
