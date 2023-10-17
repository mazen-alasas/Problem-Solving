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
	ll n, m; cin >> n >> m;
	vector<string> st(n);
	for(ll i = 0; i < n; cin >> st[i++]);
	set<ll> s;
	for(ll i = 0; i < m; i++) {
		char mx = '0';
		for(ll j = 0; j < n; j++) {
			mx = max(mx, st[j][i]);
		}
		for(ll j = 0; j < n; j++) {
			if(st[j][i] == mx) {
				s.insert(j);
			}
		}
	}
	cout << (ll)s.size();
	return 0;
}
