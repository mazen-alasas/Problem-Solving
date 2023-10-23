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
	ll n, q; cin >> n >> q;
	ll a[n], suf[n]{}, freq[N]{};
	for(ll i = 0; i < n; cin >> a[i++]);
	for(ll i = n - 1; i >= 0; i--) {
		freq[a[i]]++;
		if(freq[a[i]] == 1) {
			suf[i] = 1;
		}
	}
	for(ll i = n - 2; i >= 0; i--) {
		suf[i] += suf[i + 1];
	}
	while(q--) {
		ll l; cin >> l;
		cout << suf[--l] << endl;
	}
	return 0;
}