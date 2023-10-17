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

ll fact(ll n) {
    ll res = 1;
    for(int ll i = n; i >= 2; i--)
    	res *= i;
    return res;
}
 
ll npr(int n, int r) {
    return fact(n) / fact(n - r);
}
ll ncr(int n, int r) {
    return fact(n) / (fact(n - r) * fact(r));
}
int main() {
	IOS
	// Online();
    ll n, r; cin >> n >> r;
    cout << ncr(n, r) << ' ' << npr(n, r);
	return 0;
}
