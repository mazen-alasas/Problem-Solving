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


int main() {
	IOS
	//Online();
	T {
		ll n; cin >> n;
		ll l = 1, r = 2 * 1e9 + 7;
		while(l <= r) {
			ll mid = l + (r - l) / 2;
			ll right = (mid * (mid + 1)) / 2;
			ll left  = right - mid + 1;
			if(n >= left && n <= right) {
				cout << mid << endl;
				break;
			}
			else if(n < left)
				r = mid - 1;
			else if(n > right)
				l = mid + 1;
		}
	}
	return 0;
}
