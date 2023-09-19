///                          بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
	int n; cin >> n;
	int a[n], l, r;
	for(int i = 0; i < n; cin >> a[i++]);
	sort(a, a + n);
	int q; cin >> q;
	while(q--) {
		cin >> l >> r;
		cout << upper_bound(a, a + n, r) -  lower_bound(a, a + n, l) << ' ';
	}
  return 0;
}