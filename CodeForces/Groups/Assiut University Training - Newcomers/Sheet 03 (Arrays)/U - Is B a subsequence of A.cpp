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

int main() {
	IOS
	// Online();
	ll n, m, ctr = 0; cin >> n >> m;
	ll a[n], b[m], x = 0;
	for (ll i = 0; i < n; cin >> a[i++]);
	for (ll i = 0; i < m; cin >> b[i++]);
	for (ll i = 0; i < n; i++) {
		if (a[i] == b [x]) {
			ctr++, x++;
		}
	}
	cout << (ctr == m ? "YES" : "NO");
	return 0;
}
