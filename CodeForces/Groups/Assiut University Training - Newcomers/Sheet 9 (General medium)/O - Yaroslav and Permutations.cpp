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
		freopen("input.in", "r", stdin);
		freopen("output.out", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	ll n; cin >> n;
	ll freq[1005]{}, mx = 0;
	for(ll i = 0; i < n; i++) {
		ll a; cin >> a;
		mx = max(mx, ++freq[a]);
	}
	cout << (n - mx >= mx || mx == (n - mx) + 1 ? "YES\n" : "NO\n");
  return 0;
}
