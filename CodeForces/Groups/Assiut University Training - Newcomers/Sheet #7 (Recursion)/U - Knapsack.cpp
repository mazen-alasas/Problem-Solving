///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
int w[10005]{}, v[10005]{};
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll knapsack(ll n, ll idx, ll curCap) {
	if(idx == n)
		return 0;
	ll leave = knapsack(n, idx + 1, curCap);
	if(curCap >= w[idx]) {
		ll take = v[idx] + knapsack(n, idx + 1, curCap - w[idx]);
		return max(take, leave);
	}
	return leave;
}

int main() {
	IOS
	//Online();
	ll n, cap; cin >> n >> cap;
	for(ll i = 0; i < n; i++)
		cin >> w[i] >> v[i];
	cout << knapsack(n, 0, cap);

	return 0;
}
