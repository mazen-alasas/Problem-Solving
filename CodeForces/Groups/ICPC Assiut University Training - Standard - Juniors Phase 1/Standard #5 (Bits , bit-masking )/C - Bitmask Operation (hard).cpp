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
	int n, q; cin >> n >> q;
	while(q--) {
		short x; cin >> x;
		if(x == 1) {
			n |= (n + 1);
		} else if(x == 2) {
			n &= (n - 1);
		} else if(x == 3) {
			if(n == 0) {
				n = -1;
			} else {
				n |= (n - 1);
			}
		} else if(x == 4) {
			n &= (n + 1);
		} else if(x == 5) {
			cout << ((n & (n - 1)) == 0 && n != 0 ? "is power of two\n" : "not power of two\n");
			continue;
		} cout << n << endl;
	}
	return 0;
}
