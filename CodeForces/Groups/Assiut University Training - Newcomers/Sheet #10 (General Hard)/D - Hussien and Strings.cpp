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
	string s, t; cin >> s >> t;
	if((ll)s.size() != (ll)t.size()) {
		cout << "NO";
	} else if(s == t) {
		sort(s.begin(), s.end());
		for(ll i = 0; i < s.size(); i++) {
			if(s[i] == s[i + 1]) {
				return cout << "YES", 0;
			}
		}
		return cout << "NO", 0;
	} else {
		string x = s, y = t;
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		if(x != y) {
			cout << "NO";
		} else {
			ll ctr = 0;
			for(ll i = 0; i < s.size(); i++) {
					if(s[i] != t[i]) {
						ctr++;
					}
					if(ctr > 2) {
						return cout << "NO", 0;
					}
			}
			cout << "YES";
		}
	}
	return 0;
}
