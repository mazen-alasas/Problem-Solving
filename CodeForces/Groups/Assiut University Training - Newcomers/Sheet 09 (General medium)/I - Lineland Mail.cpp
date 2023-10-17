///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-7;
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
	ll n, mn, mx; cin >> n;
	ll a[n + 1];
	for(ll i = 1; i <= n; cin >> a[i++]);
	for(ll i = 1; i <= n; i++) {
		if(i == 1) {
			mn = abs(a[i + 1] - a[i]);
			mx = abs(a[n] - a[i]);
			cout << mn << ' ' << mx << endl;
			continue;
		}
		if(i == n) {
			mn = abs(a[n] - a[n - 1]);
			mx = abs(a[n] - a[1]);
			cout << mn << ' ' << mx << endl;
			continue;
		}
		mn = min(abs(a[i] - a[i - 1]), abs(a[i + 1] - a[i]));
		mx = max(abs(a[n] - a[i]), abs(a[i] - a[1]));
		cout << mn << ' ' << mx << endl;
	}
	return 0;
}
