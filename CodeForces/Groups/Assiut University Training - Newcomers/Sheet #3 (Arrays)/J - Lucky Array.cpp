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
	ll a[n], ctr = 0;
	for(ll i = 0; i < n; cin >> a[i++]);
	ll mn = *min_element(a, a + n);
	for(ll i = 0; i < n; i++)
		ctr += (a[i] == mn);
	cout << (ctr % 2 ? "Lucky" : "Unlucky");
	return 0;
}
