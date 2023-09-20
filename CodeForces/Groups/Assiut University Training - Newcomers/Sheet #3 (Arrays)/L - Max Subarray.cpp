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
	T {
		ll n; cin >> n;
		ll a[n], i, j;
		for(i = 0; i < n; cin >> a[i++]);
		for(i = 0; i < n; cout << a[i++] << ' ');
		for(i = 0; i < n; i++) {
			ll mx = a[i];
			for(j = i + 1; j < n; j++) {
				mx = max(mx, a[j]);
				cout << mx << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
