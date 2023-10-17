///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.in", "r", stdin);
		freopen("output.out", "w", stdout);
	#endif
}

ll lcm(ll a,ll b) {
	return (a / __gcd(a, b)) * b;
}

int main() {
	IOS
	//Online();
	ll a1, b1, a2, b2; char c;
	cin >> a1 >> c >> b1 >> a2 >> c >> b2;
	cout << lcm(a1, a2) << c << __gcd(b1, b2);
	return 0;
}

