///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-7;
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
	char c;
	string s, ans = "", keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin >> c >> s;
	for(ll i = 0; i < (ll)s.size(); i++) {
		if(c == 'R') {
			for(ll j = 0; keys[j] != 0; j++) {
				if(keys[j] == s[i]) {
					ans += keys[j - 1];
					break;
				}
			}
		} else {
			for(ll x = 0; keys[x] != 0; x++) {
				if(keys[x] == s[i]) {
					ans += keys[x + 1];
					break;
				}
			}
		}
	} 
    cout << ans;
	return 0;
}
