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
	ll n, k1, k2; cin >> n >> k1 >> k2;
	ll a[n], b[n], k = k1 + k2, x, ans = 0;
	for(ll i = 0; i < n; cin >> a[i++]);
	priority_queue<ll> pq;
	for(ll i = 0; i < n; i++) {
		cin >> b[i];
		pq.push(abs(a[i] - b[i]));
	}
	while(k--) {
		x = pq.top();
		pq.pop();
		pq.push(abs(x - 1));
	}
	while(pq.size()) {
		ans += pq.top() * pq.top();
		pq.pop();
	}
	cout << ans;
	return 0;
}
