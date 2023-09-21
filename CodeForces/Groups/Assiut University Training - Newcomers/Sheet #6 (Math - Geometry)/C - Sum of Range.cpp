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

ll odds(ll n) {
    return ((n + 1) / 2) * ((n + 1) / 2);
}
ll evens(ll n) {
    n /= 2;
    return n * (n + 1);
}
int main() {
	IOS
	// Online();
	ll a, b; cin >> a >> b;
	if(a < b) swap(a, b);
	cout << ((a * a + a) / 2) - (((b - 1) * (b - 1) + (b - 1)) / 2) << endl;
    cout << evens(a) - evens(b - 1) << endl;
	cout << odds(a) - odds(b - 1) << endl;
	return 0;
}
