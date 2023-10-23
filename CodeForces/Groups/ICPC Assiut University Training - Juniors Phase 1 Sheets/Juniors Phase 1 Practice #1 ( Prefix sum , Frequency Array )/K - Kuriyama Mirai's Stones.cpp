///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
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
	ll n; cin >> n;
	ll a[n + 1]{}, s[n + 1]{};
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = a[i];
	}
	sort(s + 1, s + n + 1);
	for(ll i = 2; i <= n; i++) {
		a[i] += a[i - 1];
		s[i] += s[i - 1];
	}
	T {
		ll x, l, r; cin >> x >> l >> r;
		if(x == 1) {
			cout << a[r] - a[l - 1] << endl;
		} else {
			cout << s[r] - s[l - 1] << endl;
		}
	}
	return 0;
}