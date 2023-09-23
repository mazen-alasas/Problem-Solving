///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.in", "r", stdin);
		freopen("output.out", "w", stdout);
	#endif
}

int main() {
	IOS
	// Online();
	ll n, k; cin >> n >> k;
	if(n < k)
		return cout << -1, 0;
	ll ctr = n % 2 ? n / 2 + 1 : n / 2;
	for(int i = ctr; i <= n; i++) {
		if(i % k == 0)
			return cout << i, 0;
	}
	return 0;
}


