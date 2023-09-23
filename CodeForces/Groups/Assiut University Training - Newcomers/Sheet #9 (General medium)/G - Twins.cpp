///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5;
using namespace std;
void Online() {
    #ifdef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
}

int main() {
	IOS
	//Online();
	ll n; cin >> n;
	ll a[n], s = 0, m = 0;
	for(ll i = 0; i < n; i++){
		cin >> a[i];
		s += a[i];
	}
	sort(a, a + n);
	for(ll i = n - 1; i >= 0; i--) {
		m += a[i];
		if(m > s - m) {
			cout << n - i;
			break;
		}
	}
	return 0;
}
