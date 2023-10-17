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
		freopen("equal.in", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
ll i, n;
double s;
void average(ll a[]) {
	if(i == n) {
		cout << fix(6) << s/n;
		return;
	}
	s += a[i++];
	average(a);
}

int main() {
    IOS
	//Online();
	cin >> n;
	ll a[n];
	for(ll j = 0; j < n; cin >> a[j++]);
	average(a);
	return 0;
}
