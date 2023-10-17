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

bool ispal(ll n, ll a[], ll s, ll e) {
    if(s >= e) 
		return 1;
    if(a[s] != a[e]) 
		return 0;
    return ispal(n, a, s + 1, e - 1);
}

int main() {
    IOS
	//Online();
	ll n; cin >> n;
    ll a[n];
    for(ll i = 0; i < n; cin >> a[i++]);
    cout << (ispal(n, a, 0, n - 1) ?  "YES\n" : "NO\n");
	return 0;
}
