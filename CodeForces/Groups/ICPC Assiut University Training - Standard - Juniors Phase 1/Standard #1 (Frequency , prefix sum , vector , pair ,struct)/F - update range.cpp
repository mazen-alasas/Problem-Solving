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
	ll n, q; cin >> n >> q;
	ll arr[n];
	for(ll i = 0; i < n; cin >> arr[i++]);
 
	ll update[n + 5]{}, l, r, x;
	while(q--) {
		cin >> l >> r >> x;
		update[--l] += x;
		update[r] -= x;
	}
 
	for(ll i = 1; i < n; i++)
		update[i] += update[i - 1];
 
	for(ll i = 0; i < n; i++) {
		arr[i] += update[i];
		cout << arr[i] << ' ';
	}
    return 0;
}