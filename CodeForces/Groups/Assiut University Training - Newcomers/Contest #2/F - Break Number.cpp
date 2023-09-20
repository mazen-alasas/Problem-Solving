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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	// Online();
	ll n, ctr = 0; cin >> n;
	for(int i = 1; i <= n; i++) {
		ll c = 0, a; cin >> a;
		if(a % 2 ==0) {
			while(a > 0 && a % 2 == 0)
				c++, a /= 2;
		}
		else
			a = 0;
		ctr = max(ctr, c);
	}
	cout << ctr;
	return 0;
}
