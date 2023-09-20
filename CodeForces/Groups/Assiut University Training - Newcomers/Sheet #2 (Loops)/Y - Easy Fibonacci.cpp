///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
	// Online();
	ll n; cin >> n;
	if(n == 1)
		cout << 0;
	else if(n == 2)
		cout << 0 << ' ' << 1;
	else {
		cout << 0 << ' ' << 1 << ' ';
		ll f = 0, t = 1;
		for(ll i = 3; i <= n; i++) {
			ll x = f + t;
			cout << x << ' ';
			f = t;
			t = x;
		}
	}
	return 0;
}