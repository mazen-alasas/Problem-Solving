///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
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
	ll n, ctr = 0; cin >> n;
	string s; cin >> s;
	if(n < 26) {           /// 12  toosmallword
		return !(cout << "NO");
	}
	for(ll i = 0; s[i]; i++) {
		if(s[i] < 'a') {
			s[i] += 32;
		}
	}
	sort(s.begin(), s.end());
	for(ll i = 0; s[i]; i++) {
		if(s[i] != s[i + 1]) {
			ctr++;
		}
	}
	cout << (ctr >= 26 ? "YES" : "NO");
	return 0;
}
