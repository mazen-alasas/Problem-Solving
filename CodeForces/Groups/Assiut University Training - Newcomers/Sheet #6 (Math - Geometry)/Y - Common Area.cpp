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
	ll t; cin >> t;
	for(ll i = 0; i < t; i++) {
		int mx = INT_MIN, my = INT_MAX, x = INT_MAX, y = INT_MIN;
		T {
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			mx = max(mx, x1), y = max(y, y1);
			my = min(my, y2), x = min(x, x2);
		}

		cout << "Case #" << i + 1 << ": " << max((x - mx), 0) * max((my - y), 0) << endl;
	}
  return 0;
}
