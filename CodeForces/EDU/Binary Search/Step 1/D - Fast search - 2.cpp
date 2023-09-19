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
ll n;
ll findLower(ll a[], ll x) {
	if(a[0] > x) return 0;
	else if(a[n - 1] <= x) return n;
	ll l = 0, r = n - 1, ans = INT_MAX;
	while(l <= r) {
		ll mid = l + (r - l) / 2;
		if(a[mid] <= x) {
			ans = mid + 1;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return ans == INT_MAX ? 0 : ans;
}

ll findUpper(ll a[], ll x) {
	ll l = 0, r = n - 1, ans = INT_MAX;
	while(l <= r) {
		ll mid = l + (r - l) / 2;
		if(a[mid] >= x) {
			ans = mid + 1;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return ans == INT_MAX ? n + 1 : ans;
}

int main() {
	IOS
	//Online();
	cin >> n;
	ll a[n], l, r;
	for(ll i = 0; i < n; cin >> a[i++]);
	sort(a, a + n);
	ll q; cin >> q;
	while(q--) {
		cin >> l >> r;
		ll x = findLower(a, r);
		ll y = findUpper(a, l);
		cout << x - y + 1 << ' ';
	}
  return 0;
}
