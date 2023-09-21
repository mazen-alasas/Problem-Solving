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
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll numOfways(ll n, ll m) {
	if(n >= m) {
		return n == m;
	}
	return numOfways(n + 1, m) + numOfways(n + 2, m) + numOfways(n + 3, m);
}
int main() {
	IOS
	//Online();
	ll n, m; cin >> n >> m;
	cout << numOfways(n, m);
  return 0;
}
