///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
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

bool isGood(ll a[], ll n, ll k, double m) {
	ll sum = 0;
	for(ll i = 0; i < n; i++)
		sum += floor(a[i] / m);
	return sum >= k;
}

int main() {
	IOS
	//Online();
	ll n, k; cin >> n >> k;
	ll a[n];
	for(ll i = 0 ; i < n; cin >> a[i++]);
	double l = 0, r = 1e8;
	for(ll j = 0; j < 100; j++) {
		double mid = l + (r - l) / 2.0;
		if(isGood(a, n, k, mid)) {
			l = mid;
		} else {
			r = mid;
		}
	}
	cout << fix(10) << l;
  return 0;
}
