///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, INF = 0x3f3f3f3f;
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
	map<ll, string> mp;
	T {
		ll a[4]; cin >> a[0] >> a[1] >> a[2] >> a[3];
		mp[a[0]] = "Hussien"; mp[a[1]] = "Atef";
		mp[a[2]] = "Karemo"; mp[a[3]] = "Ezzat";
		sort(a, a + 4);
		cout <<  mp[a[3]] << ' ' << mp[a[2]] << endl;
	}
	return 0;
}
