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
	string s, t; cin >> s >> t;
	map<ll, ll> mp;
	for(ll i = 0; i < s.size(); i++) {
		ll a; cin >> a;
		mp[a - 1] = i;
	}
	ll l = 0, r = s.size(), ans = 0;
	while(l <= r) {
		ll mid = l + (r - l) / 2, ctr = 0;
		for(ll i = 0; i < s.size(); i++) {
			if(s[i] == t[ctr] && mp[i] >= mid) {
				ctr++;
			}
		}
		if(ctr == t.size()) {
			ans = mid;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	cout << ans;
	return 0;
}
