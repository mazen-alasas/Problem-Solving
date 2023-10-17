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

ll logs1(ll n) {  // using recursion
	if (n == 1)
		return 0;
	return 1 + logs1(n >> 1);
}

ll logs2(ll n) {
	if (n == 0)
		return 0;
	ll ctr = -1;
	while (n) {
		ctr++;
		n >>= 1;
	}
	return ctr;
}

int main() {
	IOS
	//Online();
	ll n; cin >> n;
    cout << logs1(n);
	return 0;
}