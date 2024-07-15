///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 2e5 + 9, INF = 0x3f3f3f3f;
const double eps = 1e-9;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
ll a[N], l[N], r[N], d[N], inc[N], pre[N];

int main() {
	IOS
	//Online();
	ll n, m, k; cin >> n >> m >> k;
	for(ll i = 1; i ^ (n + 1); cin >> a[i++]);
	for(ll i = 1; i ^ (m + 1); i++) {
		cin >> l[i] >> r[i] >> d[i];
	}
	while(k--) {
		ll x, y; cin >> x >> y;
		inc[x]++, inc[y + 1]--;
	}
	for(ll i = 1; i ^ (m + 1); i++) {
		inc[i] += inc[i - 1];
	}
	for(ll i = 1; i ^ (m + 1); i++) {
		pre[l[i]] += (d[i] * inc[i]);
		pre[r[i] + 1] -= (d[i] * inc[i]);
	}
	for(ll i = 1; i ^ (n + 1); i++) {
		pre[i] += pre[i - 1];
	}
	for(ll i = 1; i ^ (n + 1); i++) {
		cout << a[i] + pre[i] << ' ';
	}
	return 0;
}
