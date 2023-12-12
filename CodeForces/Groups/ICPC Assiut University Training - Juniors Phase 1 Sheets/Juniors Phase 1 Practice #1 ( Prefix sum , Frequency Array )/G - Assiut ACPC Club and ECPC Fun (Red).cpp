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
	ll a[n + 1]{}, p[n + 1]{};
	for(ll i = 1; i <= n; cin >> a[i++]);
	T {
		ll l, r; cin >> l >> r;
		p[l] += 1;
		p[r + 1] -= 1;
	}
	for(ll i = 1; i <= n; i++) {
		p[i] += p[i - 1];
	}
	vector<ll> v;
	for(ll i = 1; i <= n; i++) {
		if(!p[i]) {
			v.push_back(a[i]);
		}
	}
	cout << v.size() << endl;
	for(auto it : v) {
		cout << it << ' ';
	}
	return 0;
}
