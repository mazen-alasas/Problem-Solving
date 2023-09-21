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

int r, c, a[100][100], b[100][100];
void sum(ll x, ll y) {
	if(x == r || y == c)
		return;
	if(y < c - 1)
		sum(x, y + 1);
	else
		sum(x + 1, 0);
	a[x][y] += b[x][y];
}

int main() {
	IOS
	//Online();
	cin >> r >> c;
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++)
			cin >> a[i][j];
	}
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++)
			cin >> b[i][j];
	}
	sum(0, 0);
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
    
	return 0;
}