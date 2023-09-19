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

bool isGood(ll w, ll h, ll n, ll x) {
	return (x / w) * (x / h) >= n;
}
int main() {
	IOS
    //Online();
	ll w, h, n; cin >> w >> h >> n;
	ll l = 0, r = 1, ans = 1;
	while(!isGood(w, h, n, r))
		r *= 2;
	while(l <= r) {
		ll mid = l + (r - l) / 2;
		if(isGood(w, h, n, mid)) {
			ans = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	cout << ans;
  return 0;
}
