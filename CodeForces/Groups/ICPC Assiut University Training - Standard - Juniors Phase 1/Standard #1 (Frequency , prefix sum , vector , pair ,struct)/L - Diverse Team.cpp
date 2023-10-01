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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	// Online();
	ll n, k, ctr = 0; cin >> n >> k;
	vector<ll> v(n), fre(101);

	for(ll i = 0; i < n; i++) {
		cin >> v[i];
		fre[v[i]]++;
		ctr += (fre[v[i]] == 1);
	}

	if(ctr < k)
		return cout << "NO", 0;
	ctr = 0;
	cout << "YES\n";
	for(ll i = 0; i < n; i++) {
		if(ctr == k)
			break;
		if(fre[v[i]]) {
			cout << i + 1 << ' ';
			ctr++;
			fre[v[i]] = 0;
		}
	}

	return 0;
}