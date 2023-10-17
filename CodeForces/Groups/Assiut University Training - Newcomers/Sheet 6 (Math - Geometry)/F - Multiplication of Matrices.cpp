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

ll res[105][105];
int main() {
	IOS
	// Online();
	ll ra, ca;  cin >> ra >> ca;
	ll a[ra][ca];
	for(ll i = 0; i < ra; i++) {
		for(ll j = 0; j < ca; j++)
			cin >> a[i][j];
	}
	ll rb, cb;  cin >> rb >> cb;
	ll b[rb][cb];
	for(ll i = 0; i < rb; i++) {
		for(ll j = 0; j < cb; j++)
			cin >> b[i][j];
	}
	for(ll i = 0; i < ra; i++) {
		for(ll j = 0; j < cb; j++) {
			for(ll x = 0; x < rb; x++)
				res[i][j] += a[i][x] * b[x][j];
		}
	}
	for(ll i = 0; i < ra; i++) {
		for(ll j = 0; j < cb; j++)
			cout << res[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
