///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

bool isPrime(ll n) {
	for(ll i = 2; i < n; i++) {
		if(n % i == 0)
			return 0;
	} return 1;
}

int main() {
	IOS
	//Online();
	ll n,m; cin>>n>>m;
	for(ll i = n + 1; i <= m; i++) {
		if(isPrime(i) && i < m) {
			return cout << "NO", 0;
		} else if(isPrime(i) && i == m) {
			return cout << "YES", 0;
		}
	} cout << "NO";
	return 0;
}
