///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
ll i, n, x;
ll a[25];
bool can(ll i, ll s) {
	if(i == n)
		return s == x;
	return can(i + 1, s + a[i]) || can(i + 1, s - a[i]);
}

int main() {
	IOS
	//Online();
	cin >> n >> x;
	for(ll i = 0; i < n; cin >> a[i++]);
	cout << (can(1, a[0]) ? "YES\n" : "NO\n");
  return 0;
}
