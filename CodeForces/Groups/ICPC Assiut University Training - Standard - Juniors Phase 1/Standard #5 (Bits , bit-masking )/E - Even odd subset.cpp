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
	ll a[25], subsets = 0;
	for(ll i = 0; i < n; cin >> a[i++]);
	for(ll sub = 1; sub < (1 << n); sub++) {
		ll odd = 0, even = 0;
		for(ll i = 0; i < n; i++) {
			if((sub >> i) & 1) {
				if(a[i] & 1) {
					odd++;
				} else {
					even++;
				}
			}
		}
		subsets += (even > odd);
	} cout << subsets;
	return 0;
}
