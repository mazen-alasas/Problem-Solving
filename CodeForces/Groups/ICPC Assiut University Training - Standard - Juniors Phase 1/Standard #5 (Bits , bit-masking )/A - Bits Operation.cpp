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
	ll q, n, a, x; cin >> q >> n;
	for(ll i = 0; i < q; i++) {
		cin >> a;
		if(a == 1) {
			cin >> x;
			n |= x;
			cout << n << endl;
		}
		if(a == 2) {
			cin >> x;
			n &= x;
			cout << n << endl;
		}
		if(a == 3) {
			cin >> x;
			n ^= x;
			cout << n << endl;
		}
		if(a == 4) {
			n = ~n;
			cout << n << endl;
		}
	}
	return 0;
}