///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
	// Online();
	ll n; cin >> n;
	vector<pair<ll, ll>> v;
	for(ll i = 0; i < n; i++) {
		ll a, b; cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), [&](const pair<ll, ll> &a, const pair<ll, ll> &b) {
		if(a.first >= b.first)
			return false;
		return a.first < b.first;
	});
	ll l = v[0].first, r = v[0].second;
	for(ll i = 1; i < n; i++) {
		if(v[i].first <= r) {
			l = min(l, v[i].first);
			r = max(r, v[i].second);
		} else {
			cout << l << ' ' << r << endl;
			l = v[i].first, r = v[i].second;
		}
	}
	cout << l << ' ' << r;
	return 0;
}