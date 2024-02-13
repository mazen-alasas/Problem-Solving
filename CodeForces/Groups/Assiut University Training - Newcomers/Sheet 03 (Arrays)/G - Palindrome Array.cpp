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
	ll n; cin >> n;
	ll a[n], l = 0, r = n - 1;
	for (ll i = 0; i < n; cin >> a[i++]);
	while (l < r) {
		if (a[l++] != a[r--]) {
			return !(cout << "NO");
		}
	}
	cout << "YES";
	return 0;
}
