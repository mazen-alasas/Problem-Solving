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

ll suffixSum(ll a[], ll s, ll c) {
    if(c == 0)
    	return 0;
	return (ll)a[s - 1] + suffixSum(a, s - 1, c - 1);
}

int main() {
    IOS
	//Online();
	ll n, m; cin >> n >> m;
    ll arr[n];
    for(ll i = 0; i < n; cin >> arr[i++]);
    cout << suffixSum(arr, n, m);
	return 0;
}
