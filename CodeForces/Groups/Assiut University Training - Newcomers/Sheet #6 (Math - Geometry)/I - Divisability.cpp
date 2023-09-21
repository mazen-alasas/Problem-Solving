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

ll sum(ll n) {
    return n * (n + 1) / 2;
}
int main() {
	IOS
	// Online();
	ll m, n, d; cin >> m >> n >> d;
	ll mx = max(m, n), mn = min(m, n);
    ll r = (sum(mx / d) * d) - (sum((mn - 1) / d) * d);
    cout << r;
	return 0;
}
