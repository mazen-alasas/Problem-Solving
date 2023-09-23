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
	ll n; cin >> n;
	if(n == 0) return cout << 1, 0;
	if(n % 4 == 1) cout << 8;
	if(n % 4 == 2) cout << 4;
	if(n % 4 == 3) cout << 2;
	if(n % 4 == 0) cout << 6;
	return 0;
}
