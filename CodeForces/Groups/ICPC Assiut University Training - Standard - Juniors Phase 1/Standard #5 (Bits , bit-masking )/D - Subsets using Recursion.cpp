///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e6 + 7, INF = 0x3f3f3f3f;
const double eps = 1e-9;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

vector<vector<ll>> ans;
vector<ll> v;
ll a[20], n;
void solve(ll i = 0) {
	if(i == n) {
		ans.push_back(v);
		return;
	}
	v.push_back(a[i]);
	solve(i + 1);
	v.pop_back();
	solve(i + 1);
}
int main() {
	IOS
	//Online();
	cin >> n;
	for(ll i = 0; i < n; cin >> a[i++]);
	solve();
	sort(ans.begin(), ans.end());
	for(auto v : ans) {
		for(auto e : v) {
			cout << e << ' ';
		}
		cout << endl;
	}
	return 0;
}
