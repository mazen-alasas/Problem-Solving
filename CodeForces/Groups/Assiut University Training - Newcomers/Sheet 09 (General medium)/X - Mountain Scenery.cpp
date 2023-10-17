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
	ll n, k; cin >> n >> k;
	ll a[2 * n + 2];
	for(ll i = 1; i <= 2 * n + 1; cin >> a[i++]);
	for(ll i = 2; i <= 2 * n + 1; i += 2) {
		if(a[i] - 1 > a[i - 1] && a[i] - 1 > a[i + 1] && k) {
			a[i]--;
			k--;
		}
		if(!k) break;
	}
	for(ll i = 1; i <= 2 * n + 1; i++)
		cout << a[i] << ' ';
	return 0;
}
