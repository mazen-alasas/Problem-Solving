///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-9;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll freq[N];
int main() {
	IOS
	//Online();
	ll n; cin >> n;
	ll a[n], mx = 0;
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		freq[a[i]]++;
		mx = max(mx, freq[a[i]]);
	}
	sort(a, a + n);
	for(ll i = 0; i < mx; i++) {
		for(ll j = a[0]; j <= a[n - 1]; j++) {
			if(freq[j] > 0) {
				cout << j << ' ';
				freq[j]--;
			}
		}
		cout << "\n";
	}
	return 0;
}