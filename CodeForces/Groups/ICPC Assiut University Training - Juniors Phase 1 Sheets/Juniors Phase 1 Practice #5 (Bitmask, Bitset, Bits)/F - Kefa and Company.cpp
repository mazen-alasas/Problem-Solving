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
	ll n, k; cin >> n >> k;
	pair<ll, ll> a[n];
	for(ll i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n);
	ll mx = 0, cur = 0, l = 0, r = 0;
	while(r < n) {
		ll dif = abs(a[l].first - a[r].first);
		if(dif < k) {
			cur += a[r++].second;
		} else {
			mx = max(mx, cur);
			cur -= a[l++].second;
		}
	}
	cout << max(mx, cur);
	return 0;
}
