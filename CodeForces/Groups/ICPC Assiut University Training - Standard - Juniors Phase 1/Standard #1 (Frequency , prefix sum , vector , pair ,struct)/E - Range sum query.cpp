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
    ll n, q, l, r; cin >> n >> q;
    ll a[n], pre[n + 1]{};
    for(ll i = 0; i < n; cin >> a[i++]);
    for(ll i = 1; i <= n; i++)
    	pre[i] += pre[i - 1] + a[i - 1];
    while(q--) {
    	cin >> l >> r;
    	cout << pre[r] - pre[l - 1] << endl;
    }
	return 0;
}
