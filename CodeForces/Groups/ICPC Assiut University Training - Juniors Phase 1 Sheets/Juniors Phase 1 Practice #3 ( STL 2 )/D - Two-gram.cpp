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
	ll n, res = 0; cin >> n;
	string s, ans; cin >> s;
	for(ll i = 0; i < n - 1; i++) {
		int ctr = 0;
		for(ll j = 0; j < n - 1; j++) {
			if (s[j] == s[i] && s[j + 1] == s[i + 1]) {
				ctr++;
			}
		}
		if(res < ctr) {
			res = ctr;
			ans = string(1, s[i]) + string(1, s[i + 1]);
		}
	}
	cout << ans;
 	return 0;
}