///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
		freopen("equal.in", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll fact(int n) {
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}

int main() {
    IOS
	//Online();
	ll n; cin >> n;
	cout << fact(n);
	return 0;
}
