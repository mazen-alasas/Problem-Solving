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
	T {
		ll n; cin >> n;
		string s[n];
		for(ll i = 0; i < n; cin >> s[i++]);
		map<ll, char> mp;
		for(ll i = 'a'; i <= 'z'; i++) {
			ll a; cin >> a;
			mp[a] = i;
		}
		for(ll i = 0; i < n; i++) {
			map<char, ll> freq;
			for(ll j = 0; j < s[i].size(); j++) {
				freq[s[i][j]]++;
			}
			for(ll j = 0; j < s[i].size(); j++) {
				if(s[i][j] >= 'a' && s[i][j] <= 'z') {
					cout << s[i][j];
				} else {
					cout << mp[freq[s[i][j]]];
				}
			}
			cout << endl;
		}
	}
	return 0;
}
