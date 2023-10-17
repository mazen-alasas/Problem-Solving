///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
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
	ll r, c; cin >> r >> c;
	char a[r][c];
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++)
			cin >> a[i][j];
	}
	ll col = 0, row = 0;
	for(ll i = 0; i < c; i++) {
		ll x = 0;
		for(ll j = 0; j < r; j++) {
			if(a[j][i] == 'S')
				break;
			else
				x++;
		}
		col += (x == r);
	}
	for(ll i = 0; i < r; i++) {
		ll x = 0;
		for(ll j = 0; j < c; j++) {
			if(a[i][j] == 'S')
				break;
			else
				x++;
		}
		row += (x == c);
	}
	cout << (col * r - col * row) + (row * c);
	return 0;
}
