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
	ll n; cin >> n;
	ll a[n];
	for(ll i = 0; i < n; cin >> a[i++]);
	ll s1 = 0, s2 = 0, ans = 0;
	for(ll i = 0, j = n - 1; i < n; i++) {
		s1 += a[i];
		while(s2 < s1) {
			s2 += a[j--];
		}
		if(s1 == s2 && j + 1 > i) {
			ans = s1;
		}
	}
	cout << ans;
	return 0;
}
