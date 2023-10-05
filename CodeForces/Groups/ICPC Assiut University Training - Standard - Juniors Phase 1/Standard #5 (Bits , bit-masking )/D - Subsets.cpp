///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 2e5 + 5, INF = 0x3f3f3f3f;
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
	ll n; cin >>  n;
	ll a[n];
	for(ll i = 0; i < n; cin >> a[i++]);
	vector<vector<ll>> subsets;
	for(ll subs = 0; subs < (1 << n); subs++) {
		vector<ll> sub;
		for(ll i = 0; i < n; i++) {
			if((subs >> i) & 1) {
				sub.push_back(a[i]);
			}
		}
		subsets.push_back(sub);
	}
	sort(subsets.begin(), subsets.end());
	for(ll i = 0; i < (ll)subsets.size(); i++) {
		for(ll j = 0; j < (ll)subsets[i].size(); j++) {
			cout << subsets[i][j] << ' ';
		} cout << endl;
	}
	return 0;
}



