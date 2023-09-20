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
	//Online();
	ll n; cin >> n;
	ll a[n], finalRes = INT_MAX;
	for(ll i = 0; i < n; cin>>a[i++]);
	for(ll j = 0; j < n; j++) {
		ll flag = 0;
		if(a[j] % 2)
			return cout << 0, 0;
		while(a[j] % 2 == 0) {
			flag++;
			a[j] = a[j] / 2;
		}
		finalRes = min(finalRes, flag);
	}
	cout << finalRes;
	return 0;
}
