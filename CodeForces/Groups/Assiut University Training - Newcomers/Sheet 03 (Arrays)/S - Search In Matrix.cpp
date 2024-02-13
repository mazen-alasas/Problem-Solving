/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
	ll n, m; cin >> n >> m;
	ll a[n][m];
	for (ll i = 0; i < n; i++) {
		for(ll j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	ll x; cin >> x;
	for (ll i= 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (x == a[i][j]) {
				return !(cout << "will not take number");
			}
		}
	}
	cout << "will take number";
	return 0;
}