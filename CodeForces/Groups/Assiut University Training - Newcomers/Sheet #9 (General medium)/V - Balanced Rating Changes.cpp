///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 2e5 + 5, INF = 0x3f3f3f3f;
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
	ll a[n], dif = 1;
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i]) {
			if(a[i] % 2 == 0) {
				a[i] /= 2;
			} else {
				if(dif) {
					a[i] = (a[i] + 1) / 2;
				} else {
					a[i] = (a[i] - 1) / 2;
				}
				dif = !dif;
			}
		}
		cout << a[i] << endl;
	}
	return 0;
}
