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
	// aa b aaaa bbbbbb a bb a b a bbb aaaaa
	string s; cin >> s;
	ll a = 0, b = 0, aba = 0;
	for(ll i = 0; s[i] != 0; i++) {
		if(s[i] == 'a') {
			a++;
			aba++;
		} else {
			b++;
		}
		b = max(b, a);
		aba = max(aba, b);
	}
	cout << aba;
	return 0;
}
