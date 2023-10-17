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
	ll n, a, b, s = 0; cin >> n >> a >> b;
	for(ll i = 1; i <= n; i++) {
		if(i / 10 == 0 && i >= a && i <= b)
			s += i;
		else {
			ll nm = i, sd = 0;
			while(nm) {
				ll d = nm % 10;
				sd += d;
				nm /= 10;
			}
			if(sd >= a && sd <= b)
				s += i;
		}
	}
	cout << s;
	return 0;
}