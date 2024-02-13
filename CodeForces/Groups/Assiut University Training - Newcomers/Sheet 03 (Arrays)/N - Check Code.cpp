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
	ll a, b; cin >> a >> b;
	ll n = a + b + 1;
	char c[n];
	for (ll i = 0; i < n; cin >> c[i++]);
	ll flag = (c[a] == '-');
	for (ll i = 0; i < n; i++) {
		if (c[i] == c[a]) {
			continue;
		}
		flag += (c[i] >= 48 && c[i] <= 57);
	}
	cout << (flag == n ? "Yes" : "No");
	return 0;
}