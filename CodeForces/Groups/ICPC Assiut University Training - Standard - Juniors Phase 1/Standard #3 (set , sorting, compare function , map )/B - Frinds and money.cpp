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
	//Online();
	ll n, q, m, x; cin >> n >> q;
	map<string, ll> mp;
	string s;
	while(n--) {
		cin >> s >> m;
		mp[s] = m;
	}
	while(q--) {
		cin >> x >> s;
		if(x == 1) {
			cin >> m;
			mp[s] += m;
		}
		else
			cout << mp[s] << endl;
	}

	return 0;
}