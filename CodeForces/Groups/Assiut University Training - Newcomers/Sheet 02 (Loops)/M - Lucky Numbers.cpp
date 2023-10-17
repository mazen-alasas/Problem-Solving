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
	ll a, b, j = 1; cin >> a >> b;
	for(ll i = a; i <= b; i++) {
		ll lucky = 0, n = i;
		while(n) {
			char d = n % 10;
			n /= 10;
			if(d != 4 && d != 7)
				lucky = 1;
		}
		if(lucky == 0) {
			cout << i << ' ';
			j++;
		}
	}
	if(j == 1)
		cout << -1;
	return 0;
}