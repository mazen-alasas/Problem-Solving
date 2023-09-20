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
	ll n, k, x, ctr = 0, flag = 1, mn;
	cin >> n >> k;
	for(ll i = 1; i <= n; i++) {
		cin >> x;
		ctr++;
		if(flag)
			mn = x, flag = 0;
		else if(x < mn)
			mn = x;
		if(ctr == k || i == n) {
			cout << mn << " ";
			flag = 1;
			ctr = 0;
		}
	}
	return 0;
}