///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
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
	ll r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	for(ll i = 1; i < 10; i++) {
		for(ll j = 1; j < 10; j++) {
			if(i == j) {
				continue;
			}
			for(ll x = 1; x < 10; x++) {
				if(x == j) {
					continue;
				}
				for(ll s = 1; s < 10; s++) {
					if(s==x) {
						continue;
					}
					if(i + j == r1 && x + s == r2 && i + x == c1 && j + s == c2 && 
                        i + s == d1 && j + x == d2 && i != x && i != s && j != s) {
							return !(cout << i << ' ' << j << '\n' << x << ' ' << s);
					}
				}
			}
		}
	}
	cout << -1;
	return 0;
}
