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
	T {
		ll a, b, s = 0;
		cin >> a >> b;
		ll mx = (max(a, b) % 2 == 1) ? max(a, b) - 1 : max(a, b);
		ll mn = (min(a, b) % 2 == 1) ? min(a, b) + 1 : min(a, b);
		for(ll i = mn; i <= mx; i++) {
			if(max(a, b) - min(a, b) == 1)
				break;
			else if(i % 2)
				s += i;
		}
		cout << s << endl;
	}
	return 0;
}