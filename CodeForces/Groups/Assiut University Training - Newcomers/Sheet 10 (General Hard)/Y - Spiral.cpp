///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-9;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	ll n, m; cin >> n >> m;
	ll arr[n][m];
	for(ll i = 0; i < n; i++) {
		for(ll j = 0; j < m ; j++) {
			cin >> arr[i][j];
		}
	}
	ll i = 0, j = 0;
	while(i < n && j < m) {
		// l to r
		for(ll k = j; k < m; k++) {
			 cout << arr[i][k] << ' ';
		}
		i++;
		
		// down
		for(ll k = i; k < n; k++) {
				cout << arr[k][m - 1] << ' ';
		}
		m--;

		// r to l
		if(i < n) {
			for(ll k = m - 1; k >= j; k--) {
				cout << arr[n-1][k] << ' ';
			}
			n--;
		}

		// up
		if(j < m) {
			for(ll k = n - 1; k >= i; k--) {
				cout << arr[k][j] << ' ';
			}
			j++;
		}
	}
	return 0;
}
