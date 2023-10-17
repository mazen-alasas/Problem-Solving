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
		freopen("input.in", "r", stdin);
		freopen("output.out", "w", stdout);
	#endif
}

int main() {
	IOS
	// Online();
	ll n;  cin >> n;
	ll a[n], freq[1000001]{};
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		freq[a[i]]++;
	}
	ll ctr = 0;
	for(int i = 0; i < n; i++) {
		if(freq[a[i]] > 1) {
			ctr += freq[a[i]] - 1;
			freq[a[i]] = 0;
		}
	}
	cout << (!ctr ? -1 : ctr);
	return 0;
}