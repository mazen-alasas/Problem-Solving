///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
	// Online();
	ll n; cin >> n;
	string s; cin >> s;
	ll a[n], mn = INT_MAX;
	for(ll i = 0; i < n; cin >> a[i++]);
	for(ll i = 0; i < n - 1; i++) {
		if(s[i] == 'R' && s[i + 1] == 'L')
			mn = min(mn, (a[i + 1] - a[i]) / 2);
	}
	cout << (mn == INT_MAX ? -1 : mn);
	return 0;
}