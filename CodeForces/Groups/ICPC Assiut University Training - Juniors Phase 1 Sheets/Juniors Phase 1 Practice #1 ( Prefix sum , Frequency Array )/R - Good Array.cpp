///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
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
	ll n; cin >> n;
	ll a[n], s = 0;
    map<ll, ll> ex;
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
		ex[a[i]]++;
	}
	set<ll> idxs;
	for(ll i = 0; i < n; i++) {
		ll cur = s - a[i];
		ex[a[i]]--;
		if(cur % 2 == 0 && ex[cur / 2] != 0) {
			idxs.insert(i);
		}
		ex[a[i]]++;
	}
	cout << idxs.size() << endl;
	for(auto it : idxs) {
		cout << it + 1 << ' ';
	}
	return 0;
}
