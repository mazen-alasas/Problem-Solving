///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-7;
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
	ll a[n];
	for(ll i =0; i < n; cin >> a[i++]);
	sort(a, a + n);
	for(ll i = 0; i < n - 2; i++) {
		if(a[i] + a[i + 1] > a[i + 2] && a[i + 1] + a[i + 2] > a[i] && a[i] + a[i + 2] > a[i + 1]) {
			return cout << "YES", 0;
		}
	} cout << "NO";
	return 0;
}
