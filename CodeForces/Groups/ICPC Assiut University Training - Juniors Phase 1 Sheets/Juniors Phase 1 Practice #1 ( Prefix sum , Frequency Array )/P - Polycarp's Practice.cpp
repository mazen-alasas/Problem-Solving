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
	ll n, k, sum = 0; cin >> n >> k;
	pair<ll, ll> p[n];
	for(ll i = 0; i < n; i++) {
		ll a; cin >> a;
		p[i] = {a, i + 1};
	}
	sort(p, p + n, greater<pair<ll, ll>>());
	vector<ll> idx;
	for(ll i = 0; i < k; i++) {
		sum += p[i].first;
		idx.push_back(p[i].second);
	}
	idx.push_back(0);
	sort(idx.begin(), idx.end());
	idx.back() = n;
	cout << sum << endl;
	for(ll i = 1; i <= k; i++) {
		cout << idx[i] - idx[i - 1] << ' ';
	}
	return 0;
}
