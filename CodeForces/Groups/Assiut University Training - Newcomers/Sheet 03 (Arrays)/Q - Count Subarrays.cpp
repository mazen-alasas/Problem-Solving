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
const int mod = 2e5;
int main() {
	IOS
	// Online();
	T {
		ll n; cin >> n;
		ll a[n], ctr = n;
		for (ll i = 0; i < n; cin >> a[i++]);
		for (ll i = 0; i < n; i++) {
			for (ll j = i + 1; j < n; j++) {
				if(a[j] >= a[j - 1]) {
					ctr++;
				} else {
					break;
				}
			}
		}
		cout << ctr << endl;
	}
	return 0;
}