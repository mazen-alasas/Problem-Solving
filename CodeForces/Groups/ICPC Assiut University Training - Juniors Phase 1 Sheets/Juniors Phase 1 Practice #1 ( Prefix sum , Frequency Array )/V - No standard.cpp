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
	ll n, q; cin >> n >> q;
	ll a[n + 1], in[n + 5]{}, dc[n + 5]{};
	for(ll i = 1; i <= n; cin >> a[i++]);
	while(q--) {
		ll l, r; cin >> l >> r;
		in[l]++;
		in[r + 1]--;
		dc[r + 1] += (r - l + 1);
	}
	for(ll i = 1; i <= n; i++) {
		in[i] += in[i - 1];
	}
	for(ll i = 1; i <= n; i++) {
		in[i] += in[i - 1];
		in[i] -= dc[i];
		cout << a[i] + in[i] << ' ';
	}
	return 0;
}
