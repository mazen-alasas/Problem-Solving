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
	ll n; cin >> n;
	map<ll, ll> mp;
	ll a[n];
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]] = 1;
	}
	priority_queue<ll> pq;
	for(ll i = 0; i < n; i++) {
		pq.push(i + 1);
		if(mp[pq.top()] == 0) {
			pq.pop();
		}
		if(a[i] > pq.top()) {
			mp[a[i]] = 0;
		} else if(a[i] == pq.top()) {
			mp[a[i]] = 0;
			pq.pop();
		} else if(a[i] < pq.top()) {
			return !(cout << "NO");
		}
	}
	cout << "YES";
 	return 0;
}
