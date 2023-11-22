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

bool f[55];
int main() {
	IOS
	//Online();
	ll n; cin >> n;
	for(ll i = 0; i < n; i++) {
		ll mx = 0;
		for(ll j = 0; j < n; j++) {
			ll a; cin >> a;
			mx = max(mx, a);
		}
		while(f[mx]) {
			mx++;
		}
		f[mx] = 1;
		cout << mx << ' ';
	}
	return 0;
}
