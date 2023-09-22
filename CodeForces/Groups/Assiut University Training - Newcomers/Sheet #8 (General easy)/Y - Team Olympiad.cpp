///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-7;
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
	ll n, a = 0, b = 0, c = 0; cin >> n;
	ll pr[n], mt[n], ph[n];
	for(ll i = 1; i <= n; i++) {
		ll x; cin >> x;
		if(x == 1) {
			pr[++a] = i;
		} else if(x == 2) {
			mt[++b] = i;
		} else {
			ph[++c] = i;
		}
	}
	ll m = min(a, min(b, c));
	cout << m << endl;
	for(ll i = 1; i <= m; i++) {
		cout << pr[i] << ' ' << mt[i] << ' ' << ph[i] << endl;
	}
	return 0;
}
