/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
	ll a[n], mn = INT_MAX, mx = INT_MIN, mn_idx, mx_idx;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < mn) {
			mn = a[i];
			mn_idx = i;
		}
		if (a[i] > mx) {
			mx = a[i];
			mx_idx = i;
		}
	}
	swap(a[mn_idx], a[mx_idx]);
	for (ll i = 0; i < n; cout << a[i++] << ' ');
	return 0;
}
