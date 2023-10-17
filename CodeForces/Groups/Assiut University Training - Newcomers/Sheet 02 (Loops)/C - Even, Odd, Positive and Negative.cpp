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
	ll n, e = 0, o = 0, p = 0, ne = 0; cin >> n;
	for(ll i = 0; i < n; i++) {
		ll a; cin >> a;
		a % 2 ? o++ : e++;
		a < 0 ? ne++ : a > 0 ? p++ : p;
	}
	cout << "Even: " << e << endl;
	cout << "Odd: " << o << endl;
	cout << "Positive: " << p << endl;
	cout << "Negative: " << ne << endl;
	return 0;
}