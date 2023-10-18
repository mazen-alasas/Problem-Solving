///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
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
	ll n; cin >> n;
	ll a[n], c1 = 0, c2 = 0, none = 0;
	vector<ll> ans;
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] == 0 || a[i] == 100) {
			ans.push_back(a[i]);
		} else if(a[i] < 10 && c1 == 0) {
			ans.push_back(a[i]);
			c1 = 1;
		} else if(a[i] % 10 == 0 && c2 == 0) {
			ans.push_back(a[i]);
			c2 = 1;
		} else {
			none = a[i];
		}
	}
	if(!c1 && !c2 && none) {
		ans.push_back(none);
	}
	cout << ans.size() << endl;
	for(auto it : ans) {
		cout << it << ' ';
	}
	return 0;
}
