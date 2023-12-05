///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, INF = 0x3f3f3f3f;
const double eps = 1e-9;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

const int it = 1 << 18;
int main() {
	IOS
	//Online();
	ll n, x, ans = 0; cin >> n >> x;
	if(n == 1) {
		cout << "YES" << endl << x << endl;
	} else if(n == 2 && !x) {
		cout << "NO" << endl;
	} else if(n == 2 && x) {
		cout << "YES" << endl << "0 " << x << endl;
	} else {
		cout << "YES" << endl;
		for(int i = 1; i <= n - 3; i++) {
			cout << i << ' ';
			ans ^= i;
		}
		if(ans == x) {
			cout << it << ' ' << it * 2 << ' ' << it + it * 2 <<endl;
		} else {
			cout << it << ' ' << ((it ^ x) ^ ans) << " 0" <<endl;
		}
	}
	return 0;
}
