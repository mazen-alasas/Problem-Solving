///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
inline void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	ll n, m;
	cin >> n >> m;
	ll a[n], b[m], c[n + m];
	for(ll k = 0; k < n; cin >> a[k++]);
	for(ll k = 0; k < m; cin >> b[k++]);
	ll i = 0, j = 0;
	for(ll k = 0; k < n + m; k++) {
		if(j == m || (i < n && a[i] < b[j])) {
			c[k] = a[i++];
		} else {
			c[k] = b[j++];
		}
	}
	for(ll k = 0; k < n + m; k++)
		cout << c[k] << ' ';
  return 0;
}
