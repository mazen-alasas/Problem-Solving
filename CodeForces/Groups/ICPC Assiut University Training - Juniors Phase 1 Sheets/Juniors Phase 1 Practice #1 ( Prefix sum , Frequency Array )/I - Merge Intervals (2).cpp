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
	ll n; cin >> n;
	pair<ll, ll> a[n];
	for(ll i = 0; i < n; i++) {
		ll l, r; cin >> l >> r;
		a[i] = {min(l, r), max(l, r)};
	}
	sort(a, a + n);
	ll l = a[0].first, r = a[0].second;
	for(ll i = 1; i < n; i++) {
		if(a[i].first <= r) {
			l = min(l, a[i].first);
			r = max(r, a[i].second);
		}
		else {
			cout << l << ' ' << r << endl;
			l = a[i].first, r = a[i].second;
		}
	}
	cout << l << ' ' << r;
	return 0;
}
