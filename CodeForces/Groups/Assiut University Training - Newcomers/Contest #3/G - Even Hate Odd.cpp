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
int main() {
	IOS
	//Online();
	T {
		ll n, ev = 0, od = 0; cin >> n;
		for(ll i = 0; i < n; i++) {
			ll a; cin >> a;
			ev += !(a & 1);
			od += (a & 1);
		}
		cout << (ev == od ? 0 : (n & 1) ? -1 : abs(ev - od) / 2);
		cout << endl;
	}
  return 0;
}
