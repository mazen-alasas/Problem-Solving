///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
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
	ll a[n];
	for(ll i = 0; i < n; cin >> a[i++]);
	while(q--) {
		ll x; cin >> x;
		ll l = 0, r = n - 1, idx = n + 1;
		while(l <= r) {
			ll mid = l + (r - l) / 2;
			if(a[mid] >= x) {
				idx = mid + 1;
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}
		cout << idx << '\n';
	}
  return 0;
}
