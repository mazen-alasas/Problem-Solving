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
	ll n, q, a; cin >> n >> q;
	vector<ll> v(100005), vis(100005);
	for(ll i = 0; i < n; i++) {
		cin >> a;
		if(!vis[a]) {
			v[a]++;
			vis[a] = 1;
		}
	}
	for(ll i = 1; i < 100005; i++)
		v[i] += v[i - 1];
	while(q--) {
		cin >> a;
		cout << v[a - 1] << ' ' << v[100004] - v[a] << endl;
	}
	return 0;
}
/*
		  1     4 5 6 7
		0 1 2 3 4 5 6 7 8 9
		0 1 1 1 2 3 4 5 5 5 >> v

*/
