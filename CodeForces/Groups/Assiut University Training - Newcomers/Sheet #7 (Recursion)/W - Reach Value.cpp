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

bool can(ll n, ll i) {
	if(n < i)
		return 0;
	return i == n || can(n, i * 10) || can(n, i * 20);
}

int main() {
	IOS
	//Online();
	T {
		ll n; cin >> n;
		cout << (can(n, 1) ? "YES\n" : "NO\n");
	}
  return 0;
}
