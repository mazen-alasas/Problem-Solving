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
	while(true) {
		ll a, b, s = 0; cin >> a >> b;
		if(a > 0 && b > 0) {
			for(ll i = min(a, b); i <= max(a, b); i++) {
				cout << i << ' ';
				s += i;
			}
			cout << "sum =" << s << endl;
		}
		else
			break;
	}
	return 0;
}
