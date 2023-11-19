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
		vector<ll> v(n);
		for(ll i = 0; i < n; cin >> v[i++]);
		set<vector<ll>>st;
		for(ll i = 0; i < n; i++) {
			for(ll j = i + 1; j < n; j++) {
				swap(v[i], v[j]);
				st.insert(v);
				swap(v[i], v[j]);
			}
		}
		cout << st.size() << '\n';
	}
	return 0;
}
