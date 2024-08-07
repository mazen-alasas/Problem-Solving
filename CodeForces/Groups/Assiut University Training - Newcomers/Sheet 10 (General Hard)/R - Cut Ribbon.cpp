///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
	//Online();
	ll n, a, b, c, mx = 0;
	cin >> n >> a >> b >> c;
	for(ll i = 0; i <= n; i++) {
		for(ll j = 0; j <= n; j++) {
			ll v = (n - i * a - j * b) / c;
			v = (v < 0) ? 0 : v;
			if(i * a + j * b + v * c == n) {
				mx = max(mx, i + j + v);
			}
		} 
	}
	cout << mx;
	return 0;
}
