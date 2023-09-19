///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
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

bool isGood(ll n, ll x, ll y, ll mid) {
	ll mn = min(x, y), ans = 1;
	if(mid < mn) return 0;
	mid -= mn;
	ans += (mid / x) + (mid / y);
	return ans >= n;
}
int main() {
	IOS
	//Online();
	ll n, x, y; cin >> n >> x >> y;
	ll l = 0, r = 2e9 + 5, ans;
	while(l <= r) {
		ll mid = l + (r - l) / 2;
		if(isGood(n, x, y, mid)) {
			ans = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	cout << ans;
  return 0;
}
