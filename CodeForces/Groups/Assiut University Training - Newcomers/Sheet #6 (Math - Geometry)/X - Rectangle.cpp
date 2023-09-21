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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	T {
		ll x, y, ctr = 0;
		cin >> x >> y;
		if(x >= min({x1, x2, x3, x4}) && x <= max({x1, x2, x3, x4}))
			ctr++;
		if(y >= min({y1, y2, y3, y4}) && y <= max({y1, y2, y3, y4}))
			ctr++;
		cout << (ctr == 2 ? "YES\n" : "NO\n");
	}
  return 0;
}
